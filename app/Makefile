#*******************************************************************************
#  Ledger App
#  (c) 2019 - 2024 Zondax AG
#  (c) 2017 Ledger
#
#  Licensed under the Apache License, Version 2.0 (the "License");
#  you may not use this file except in compliance with the License.
#  You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
#  Unless required by applicable law or agreed to in writing, software
#  distributed under the License is distributed on an "AS IS" BASIS,
#  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#  See the License for the specific language governing permissions and
#  limitations under the License.
#*******************************************************************************

ifeq ($(BOLOS_SDK),)
$(error BOLOS_SDK is not set)
endif

MY_DIR := $(dir $(lastword $(MAKEFILE_LIST)))

include $(CURDIR)/../deps/ledger-zxlib/makefiles/Makefile.installer_script

include $(BOLOS_SDK)/Makefile.defines

PRODUCTION_BUILD ?= 1

DEFINES += APP_ACCOUNT_MODE_ENABLED

$(info ************ TARGET_NAME  = [$(TARGET_NAME)])

include $(CURDIR)/../deps/ledger-zxlib/makefiles/Makefile.app_testing

ifeq ($(SUPPORT_SR25519),1)
DEFINES += SUPPORT_SR25519
OUTPUT_ELF ?= $(CURDIR)/output/app_sr25519.elf
$(info ************  SR25519 ENABLED ************)
endif

ifeq ($(SUBSTRATE_PARSER_FULL),1)
DEFINES += SUBSTRATE_PARSER_FULL
$(info ************ FULL PARSER ENABLED ************)
endif

# Display whether this is a production build or for internal use
ifeq ($(PRODUCTION_BUILD), 1)
    $(info ************ PRODUCTION_BUILD  = [PRODUCTION BUILD])
else
    $(info ************ PRODUCTION_BUILD  = [INTERNAL USE])
endif

# Add the PRODUCTION_BUILD definition to the compiler flags
DEFINES += PRODUCTION_BUILD=$(PRODUCTION_BUILD)

ifndef COIN
COIN=ASTR
endif

include $(CURDIR)/Makefile.version

$(info COIN  = [$(COIN)])

ifeq ($(COIN),ASTR)
# Main app configuration
DEFINES += APP_STANDARD
ifneq ($(TARGET_NAME),TARGET_NANOS)
DEFINES += SUBSTRATE_PARSER_FULL
endif
APPNAME = "Astar"
APPPATH = "44'/810'" --path "44'/354'"

else ifeq ($(COIN),ASTR_XL)
# XL app configuration
DEFINES += APP_STANDARD SUBSTRATE_PARSER_FULL
APPNAME = "Astar XL"
APPPATH = "44'/810'" --path "44'/354'"

else
define error_message

COIN value not supported: [$(COIN)]

endef
$(error "$(error_message)")
endif

APP_LOAD_PARAMS = --curve ed25519 $(COMMON_LOAD_PARAMS) --path $(APPPATH)

include $(CURDIR)/../deps/ledger-zxlib/makefiles/Makefile.devices

$(info TARGET_NAME  = [$(TARGET_NAME)])
$(info ICONNAME  = [$(ICONNAME)])

ifndef ICONNAME
$(error ICONNAME is not set)
endif

include $(CURDIR)/../deps/ledger-zxlib/makefiles/Makefile.platform
LDFLAGS += -z muldefs

ifeq ($(SUPPORT_SR25519),1)
APP_CUSTOM_LINK_DEPENDENCIES = rust
LDLIBS += -Lrust/target/thumbv6m-none-eabi/release -lrslib
APP_SOURCE_PATH += $(CURDIR)/rust/include
endif

.PHONY: rust
rust:
	cd rust && CARGO_HOME="$(CURDIR)/rust/.cargo" cargo build --target thumbv6m-none-eabi --release

.PHONY: rust_clean
rust_clean:
	cd rust && CARGO_HOME="$(CURDIR)/rust/.cargo" cargo clean

clean: rust_clean

include $(CURDIR)/../deps/ledger-zxlib/makefiles/Makefile.side_loading

# Import generic rules from the SDK
include $(BOLOS_SDK)/Makefile.rules

#add dependency on custom makefile filename
dep/%.d: %.c Makefile

.PHONY: listvariants
listvariants:
ifeq ($(TARGET_NAME),TARGET_NANOS)
	@echo VARIANTS COIN ASTR ASTR_XL
else
	@echo VARIANTS COIN ASTR
endif

.PHONY: version
version:
	@echo "v$(APPVERSION)" > app.version
