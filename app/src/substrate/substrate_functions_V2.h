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

#include "parser_common.h"
#include "substrate_methods_V2.h"
#include "substrate_types_V2.h"
#include <stddef.h>
#include <stdint.h>

// Read functions
parser_error_t _readAccountId_V2(parser_context_t* c, pd_AccountId_V2_t* v);
parser_error_t _readCompactAccountIndex_V2(parser_context_t* c, pd_CompactAccountIndex_V2_t* v);
parser_error_t _readContractStakeInfoBalanceOfT_V2(parser_context_t* c, pd_ContractStakeInfoBalanceOfT_V2_t* v);
parser_error_t _readDappsRewardDestination_V2(parser_context_t* c, pd_DappsRewardDestination_V2_t* v);
parser_error_t _readDestroyWitness_V2(parser_context_t* c, pd_DestroyWitness_V2_t* v);
parser_error_t _readEraIndex_V2(parser_context_t* c, pd_EraIndex_V2_t* v);
parser_error_t _readH160_V2(parser_context_t* c, pd_H160_V2_t* v);
parser_error_t _readLookupasStaticLookupSource_V2(parser_context_t* c, pd_LookupasStaticLookupSource_V2_t* v);
parser_error_t _readOpaqueCall_V2(parser_context_t* c, pd_OpaqueCall_V2_t* v);
parser_error_t _readOptionTimepoint_V2(parser_context_t* c, pd_OptionTimepoint_V2_t* v);
parser_error_t _readPerbill_V2(parser_context_t* c, pd_Perbill_V2_t* v);
parser_error_t _readSmartContract_V2(parser_context_t* c, pd_SmartContract_V2_t* v);
parser_error_t _readTimepoint_V2(parser_context_t* c, pd_Timepoint_V2_t* v);
parser_error_t _readVecAccountId_V2(parser_context_t* c, pd_VecAccountId_V2_t* v);
parser_error_t _readWeight_V2(parser_context_t* c, pd_Weight_V2_t* v);

// toString functions
parser_error_t _toStringAccountId_V2(
    const pd_AccountId_V2_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactAccountIndex_V2(
    const pd_CompactAccountIndex_V2_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringContractStakeInfoBalanceOfT_V2(
    const pd_ContractStakeInfoBalanceOfT_V2_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringDappsRewardDestination_V2(
    const pd_DappsRewardDestination_V2_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringDestroyWitness_V2(
    const pd_DestroyWitness_V2_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringEraIndex_V2(
    const pd_EraIndex_V2_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringH160_V2(
    const pd_H160_V2_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringLookupasStaticLookupSource_V2(
    const pd_LookupasStaticLookupSource_V2_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOpaqueCall_V2(
    const pd_OpaqueCall_V2_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOptionTimepoint_V2(
    const pd_OptionTimepoint_V2_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringPerbill_V2(
    const pd_Perbill_V2_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringSmartContract_V2(
    const pd_SmartContract_V2_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringTimepoint_V2(
    const pd_Timepoint_V2_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecAccountId_V2(
    const pd_VecAccountId_V2_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringWeight_V2(
    const pd_Weight_V2_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

#ifdef __cplusplus
}
#endif
