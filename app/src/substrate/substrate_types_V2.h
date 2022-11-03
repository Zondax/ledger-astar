/*******************************************************************************
 *  (c) 2019 - 2022 Zondax AG
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 ********************************************************************************/
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "substrate_types.h"
#include <stddef.h>
#include <stdint.h>

// Based
// https://github.com/paritytech/substrate/blob/master/node/primitives/src/lib.rs

typedef struct {
    const uint8_t* _ptr;
} pd_AccountId_V2_t;

typedef struct {
    compactInt_t value;
} pd_CompactAccountIndex_V2_t;

typedef struct {
    const uint8_t* _ptr;
} pd_H160_V2_t;

typedef struct {
    pd_BlockNumber_t height;
    uint32_t index;
} pd_Timepoint_V2_t;

typedef struct {
    pd_CompactBalance_t total;
    pd_Compactu32_t numberOfStakers;
    pd_bool_t contractRewardClaimed;
} pd_ContractStakeInfoBalanceOfT_V2_t;

typedef struct {
    pd_Compactu32_t accounts;
    pd_Compactu32_t sufficients;
    pd_Compactu32_t approvals;
} pd_DestroyWitness_V2_t;

typedef struct {
    uint8_t value;
    union {
        pd_AccountId_V2_t id;
        pd_CompactAccountIndex_V2_t index;
        pd_Bytes_t raw;
        const uint8_t* _ptr;
    };
} pd_LookupasStaticLookupSource_V2_t;

typedef struct {
    pd_Call_t call;
} pd_OpaqueCall_V2_t;

typedef struct {
    uint8_t some;
    pd_Timepoint_V2_t contained;
} pd_OptionTimepoint_V2_t;

typedef struct {
    uint8_t value;
    union {
        pd_H160_V2_t evm;
        pd_AccountId_V2_t wasm;
    };
} pd_SmartContract_V2_t;

typedef struct {
    uint8_t value;
} pd_DappsRewardDestination_V2_t;

typedef struct {
    uint32_t value;
} pd_EraIndex_V2_t;

typedef struct {
    uint32_t value;
} pd_Perbill_V2_t;

typedef struct {
    uint64_t _len;
    const uint8_t* _ptr;
    uint64_t _lenBuffer;
} pd_VecAccountId_V2_t;

typedef struct {
    uint64_t value;
} pd_Weight_V2_t;

#ifdef __cplusplus
}
#endif
