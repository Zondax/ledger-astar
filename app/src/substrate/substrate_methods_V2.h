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
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wextern-c-compat"
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "substrate_types.h"
#include "substrate_types_V2.h"
#include <stddef.h>
#include <stdint.h>
#ifdef LEDGER_SPECIFIC
#include "bolos_target.h"
#endif

#define PD_CALL_SYSTEM_V2 10
#define PD_CALL_UTILITY_V2 11
#define PD_CALL_MULTISIG_V2 14
#define PD_CALL_BALANCES_V2 31
#define PD_CALL_DAPPSSTAKING_V2 34
#define PD_CALL_ASSETS_V2 36

#define PD_CALL_UTILITY_BATCH_V2 0
typedef struct {
    pd_VecCall_t calls;
} pd_utility_batch_V2_t;

#define PD_CALL_UTILITY_BATCH_ALL_V2 2
typedef struct {
    pd_VecCall_t calls;
} pd_utility_batch_all_V2_t;

#define PD_CALL_UTILITY_FORCE_BATCH_V2 4
typedef struct {
    pd_VecCall_t calls;
} pd_utility_force_batch_V2_t;

#define PD_CALL_BALANCES_TRANSFER_ALL_V2 4
typedef struct {
    pd_LookupasStaticLookupSource_V2_t dest;
    pd_bool_t keep_alive;
} pd_balances_transfer_all_V2_t;

#define PD_CALL_DAPPSSTAKING_REGISTER_V2 0
typedef struct {
    pd_AccountId_V2_t developer;
    pd_SmartContract_V2_t contract_id;
} pd_dappsstaking_register_V2_t;

#define PD_CALL_DAPPSSTAKING_UNREGISTER_V2 1
typedef struct {
    pd_SmartContract_V2_t contract_id;
} pd_dappsstaking_unregister_V2_t;

#define PD_CALL_DAPPSSTAKING_WITHDRAW_FROM_UNREGISTERED_V2 2
typedef struct {
    pd_SmartContract_V2_t contract_id;
} pd_dappsstaking_withdraw_from_unregistered_V2_t;

#define PD_CALL_DAPPSSTAKING_BOND_AND_STAKE_V2 3
typedef struct {
    pd_SmartContract_V2_t contract_id;
    pd_Compactu128_t amount;
} pd_dappsstaking_bond_and_stake_V2_t;

#define PD_CALL_DAPPSSTAKING_UNBOND_AND_UNSTAKE_V2 4
typedef struct {
    pd_SmartContract_V2_t contract_id;
    pd_Compactu128_t amount;
} pd_dappsstaking_unbond_and_unstake_V2_t;

#define PD_CALL_DAPPSSTAKING_WITHDRAW_UNBONDED_V2 5
typedef struct {
} pd_dappsstaking_withdraw_unbonded_V2_t;

#define PD_CALL_DAPPSSTAKING_NOMINATION_TRANSFER_V2 6
typedef struct {
    pd_SmartContract_V2_t origin_contract_id;
    pd_Compactu128_t amount;
    pd_SmartContract_V2_t target_contract_id;
} pd_dappsstaking_nomination_transfer_V2_t;

#define PD_CALL_DAPPSSTAKING_CLAIM_STAKER_V2 7
typedef struct {
    pd_SmartContract_V2_t contract_id;
} pd_dappsstaking_claim_staker_V2_t;

#define PD_CALL_DAPPSSTAKING_CLAIM_DAPP_V2 8
typedef struct {
    pd_SmartContract_V2_t contract_id;
    pd_Compactu32_t era;
} pd_dappsstaking_claim_dapp_V2_t;

#ifdef SUBSTRATE_PARSER_FULL
#ifndef TARGET_NANOS
#endif

#define PD_CALL_BALANCES_FORCE_UNRESERVE_V2 5
typedef struct {
    pd_LookupasStaticLookupSource_V2_t who;
    pd_Balance_t amount;
} pd_balances_force_unreserve_V2_t;

#define PD_CALL_DAPPSSTAKING_FORCE_NEW_ERA_V2 9
typedef struct {
} pd_dappsstaking_force_new_era_V2_t;

#define PD_CALL_DAPPSSTAKING_MAINTENANCE_MODE_V2 10
typedef struct {
    pd_bool_t enable_maintenance;
} pd_dappsstaking_maintenance_mode_V2_t;

#define PD_CALL_DAPPSSTAKING_SET_REWARD_DESTINATION_V2 11
typedef struct {
    pd_DappsRewardDestination_V2_t reward_destination;
} pd_dappsstaking_set_reward_destination_V2_t;

#define PD_CALL_DAPPSSTAKING_SET_CONTRACT_STAKE_INFO_V2 12
typedef struct {
    pd_SmartContract_V2_t contract;
    pd_EraIndex_V2_t era;
    pd_ContractStakeInfoBalanceOfT_V2_t contract_stake_info;
} pd_dappsstaking_set_contract_stake_info_V2_t;

#define PD_CALL_ASSETS_CREATE_V2 0
typedef struct {
    pd_Compactu128_t id;
    pd_LookupasStaticLookupSource_V2_t admin;
    pd_Balance_t min_balance;
} pd_assets_create_V2_t;

#define PD_CALL_ASSETS_FORCE_CREATE_V2 1
typedef struct {
    pd_Compactu128_t id;
    pd_LookupasStaticLookupSource_V2_t owner;
    pd_bool_t is_sufficient;
    pd_Compactu128_t min_balance;
} pd_assets_force_create_V2_t;

#define PD_CALL_ASSETS_DESTROY_V2 2
typedef struct {
    pd_Compactu128_t id;
    pd_DestroyWitness_V2_t witness;
} pd_assets_destroy_V2_t;

#define PD_CALL_ASSETS_MINT_V2 3
typedef struct {
    pd_Compactu128_t id;
    pd_LookupasStaticLookupSource_V2_t beneficiary;
    pd_Compactu128_t amount;
} pd_assets_mint_V2_t;

#define PD_CALL_ASSETS_BURN_V2 4
typedef struct {
    pd_Compactu128_t id;
    pd_LookupasStaticLookupSource_V2_t who;
    pd_Compactu128_t amount;
} pd_assets_burn_V2_t;

#define PD_CALL_ASSETS_TRANSFER_V2 5
typedef struct {
    pd_Compactu128_t id;
    pd_LookupasStaticLookupSource_V2_t target;
    pd_Compactu128_t amount;
} pd_assets_transfer_V2_t;

#define PD_CALL_ASSETS_TRANSFER_KEEP_ALIVE_V2 6
typedef struct {
    pd_Compactu128_t id;
    pd_LookupasStaticLookupSource_V2_t target;
    pd_Compactu128_t amount;
} pd_assets_transfer_keep_alive_V2_t;

#define PD_CALL_ASSETS_FORCE_TRANSFER_V2 7
typedef struct {
    pd_Compactu128_t id;
    pd_LookupasStaticLookupSource_V2_t source;
    pd_LookupasStaticLookupSource_V2_t dest;
    pd_Compactu128_t amount;
} pd_assets_force_transfer_V2_t;

#define PD_CALL_ASSETS_FREEZE_V2 8
typedef struct {
    pd_Compactu128_t id;
    pd_LookupasStaticLookupSource_V2_t who;
} pd_assets_freeze_V2_t;

#define PD_CALL_ASSETS_THAW_V2 9
typedef struct {
    pd_Compactu128_t id;
    pd_LookupasStaticLookupSource_V2_t who;
} pd_assets_thaw_V2_t;

#define PD_CALL_ASSETS_FREEZE_ASSET_V2 10
typedef struct {
    pd_Compactu128_t id;
} pd_assets_freeze_asset_V2_t;

#define PD_CALL_ASSETS_THAW_ASSET_V2 11
typedef struct {
    pd_Compactu128_t id;
} pd_assets_thaw_asset_V2_t;

#define PD_CALL_ASSETS_TRANSFER_OWNERSHIP_V2 12
typedef struct {
    pd_Compactu128_t id;
    pd_LookupasStaticLookupSource_V2_t owner;
} pd_assets_transfer_ownership_V2_t;

#define PD_CALL_ASSETS_SET_TEAM_V2 13
typedef struct {
    pd_Compactu128_t id;
    pd_LookupasStaticLookupSource_V2_t issuer;
    pd_LookupasStaticLookupSource_V2_t admin;
    pd_LookupasStaticLookupSource_V2_t freezer;
} pd_assets_set_team_V2_t;

#define PD_CALL_ASSETS_SET_METADATA_V2 14
typedef struct {
    pd_Compactu128_t id;
    pd_Vecu8_t name;
    pd_Vecu8_t symbol;
    pd_u8_t decimals;
} pd_assets_set_metadata_V2_t;

#define PD_CALL_ASSETS_CLEAR_METADATA_V2 15
typedef struct {
    pd_Compactu128_t id;
} pd_assets_clear_metadata_V2_t;

#define PD_CALL_ASSETS_FORCE_SET_METADATA_V2 16
typedef struct {
    pd_Compactu128_t id;
    pd_Vecu8_t name;
    pd_Vecu8_t symbol;
    pd_u8_t decimals;
    pd_bool_t is_frozen;
} pd_assets_force_set_metadata_V2_t;

#define PD_CALL_ASSETS_FORCE_CLEAR_METADATA_V2 17
typedef struct {
    pd_Compactu128_t id;
} pd_assets_force_clear_metadata_V2_t;

#define PD_CALL_ASSETS_FORCE_ASSET_STATUS_V2 18
typedef struct {
    pd_Compactu128_t id;
    pd_LookupasStaticLookupSource_V2_t owner;
    pd_LookupasStaticLookupSource_V2_t issuer;
    pd_LookupasStaticLookupSource_V2_t admin;
    pd_LookupasStaticLookupSource_V2_t freezer;
    pd_Compactu128_t min_balance;
    pd_bool_t is_sufficient;
    pd_bool_t is_frozen;
} pd_assets_force_asset_status_V2_t;

#define PD_CALL_ASSETS_APPROVE_TRANSFER_V2 19
typedef struct {
    pd_Compactu128_t id;
    pd_LookupasStaticLookupSource_V2_t delegate;
    pd_Compactu128_t amount;
} pd_assets_approve_transfer_V2_t;

#define PD_CALL_ASSETS_CANCEL_APPROVAL_V2 20
typedef struct {
    pd_Compactu128_t id;
    pd_LookupasStaticLookupSource_V2_t delegate;
} pd_assets_cancel_approval_V2_t;

#define PD_CALL_ASSETS_FORCE_CANCEL_APPROVAL_V2 21
typedef struct {
    pd_Compactu128_t id;
    pd_LookupasStaticLookupSource_V2_t owner;
    pd_LookupasStaticLookupSource_V2_t delegate;
} pd_assets_force_cancel_approval_V2_t;

#define PD_CALL_ASSETS_TRANSFER_APPROVED_V2 22
typedef struct {
    pd_Compactu128_t id;
    pd_LookupasStaticLookupSource_V2_t owner;
    pd_LookupasStaticLookupSource_V2_t destination;
    pd_Compactu128_t amount;
} pd_assets_transfer_approved_V2_t;

#define PD_CALL_ASSETS_TOUCH_V2 23
typedef struct {
    pd_Compactu128_t id;
} pd_assets_touch_V2_t;

#define PD_CALL_ASSETS_REFUND_V2 24
typedef struct {
    pd_Compactu128_t id;
    pd_bool_t allow_burn;
} pd_assets_refund_V2_t;

#endif

typedef union {
    pd_utility_batch_V2_t utility_batch_V2;
    pd_utility_batch_all_V2_t utility_batch_all_V2;
    pd_utility_force_batch_V2_t utility_force_batch_V2;
    pd_balances_transfer_all_V2_t balances_transfer_all_V2;
    pd_dappsstaking_register_V2_t dappsstaking_register_V2;
    pd_dappsstaking_unregister_V2_t dappsstaking_unregister_V2;
    pd_dappsstaking_withdraw_from_unregistered_V2_t dappsstaking_withdraw_from_unregistered_V2;
    pd_dappsstaking_bond_and_stake_V2_t dappsstaking_bond_and_stake_V2;
    pd_dappsstaking_unbond_and_unstake_V2_t dappsstaking_unbond_and_unstake_V2;
    pd_dappsstaking_withdraw_unbonded_V2_t dappsstaking_withdraw_unbonded_V2;
    pd_dappsstaking_nomination_transfer_V2_t dappsstaking_nomination_transfer_V2;
    pd_dappsstaking_claim_staker_V2_t dappsstaking_claim_staker_V2;
    pd_dappsstaking_claim_dapp_V2_t dappsstaking_claim_dapp_V2;
#ifdef SUBSTRATE_PARSER_FULL
#ifndef TARGET_NANOS
#endif
    pd_balances_force_unreserve_V2_t balances_force_unreserve_V2;
    pd_dappsstaking_force_new_era_V2_t dappsstaking_force_new_era_V2;
    pd_dappsstaking_maintenance_mode_V2_t dappsstaking_maintenance_mode_V2;
    pd_dappsstaking_set_reward_destination_V2_t dappsstaking_set_reward_destination_V2;
    pd_dappsstaking_set_contract_stake_info_V2_t dappsstaking_set_contract_stake_info_V2;
    pd_assets_create_V2_t assets_create_V2;
    pd_assets_force_create_V2_t assets_force_create_V2;
    pd_assets_destroy_V2_t assets_destroy_V2;
    pd_assets_mint_V2_t assets_mint_V2;
    pd_assets_burn_V2_t assets_burn_V2;
    pd_assets_transfer_V2_t assets_transfer_V2;
    pd_assets_transfer_keep_alive_V2_t assets_transfer_keep_alive_V2;
    pd_assets_force_transfer_V2_t assets_force_transfer_V2;
    pd_assets_freeze_V2_t assets_freeze_V2;
    pd_assets_thaw_V2_t assets_thaw_V2;
    pd_assets_freeze_asset_V2_t assets_freeze_asset_V2;
    pd_assets_thaw_asset_V2_t assets_thaw_asset_V2;
    pd_assets_transfer_ownership_V2_t assets_transfer_ownership_V2;
    pd_assets_set_team_V2_t assets_set_team_V2;
    pd_assets_set_metadata_V2_t assets_set_metadata_V2;
    pd_assets_clear_metadata_V2_t assets_clear_metadata_V2;
    pd_assets_force_set_metadata_V2_t assets_force_set_metadata_V2;
    pd_assets_force_clear_metadata_V2_t assets_force_clear_metadata_V2;
    pd_assets_force_asset_status_V2_t assets_force_asset_status_V2;
    pd_assets_approve_transfer_V2_t assets_approve_transfer_V2;
    pd_assets_cancel_approval_V2_t assets_cancel_approval_V2;
    pd_assets_force_cancel_approval_V2_t assets_force_cancel_approval_V2;
    pd_assets_transfer_approved_V2_t assets_transfer_approved_V2;
    pd_assets_touch_V2_t assets_touch_V2;
    pd_assets_refund_V2_t assets_refund_V2;
#endif
} pd_MethodBasic_V2_t;

#define PD_CALL_BALANCES_TRANSFER_V2 0
typedef struct {
    pd_LookupasStaticLookupSource_V2_t dest;
    pd_CompactBalance_t amount;
} pd_balances_transfer_V2_t;

#define PD_CALL_BALANCES_FORCE_TRANSFER_V2 2
typedef struct {
    pd_LookupasStaticLookupSource_V2_t source;
    pd_LookupasStaticLookupSource_V2_t dest;
    pd_CompactBalance_t amount;
} pd_balances_force_transfer_V2_t;

#define PD_CALL_BALANCES_TRANSFER_KEEP_ALIVE_V2 3
typedef struct {
    pd_LookupasStaticLookupSource_V2_t dest;
    pd_CompactBalance_t amount;
} pd_balances_transfer_keep_alive_V2_t;

#ifdef SUBSTRATE_PARSER_FULL
#ifndef TARGET_NANOS
#endif
#define PD_CALL_SYSTEM_FILL_BLOCK_V2 0
typedef struct {
    pd_Perbill_V2_t ratio;
} pd_system_fill_block_V2_t;

#define PD_CALL_MULTISIG_AS_MULTI_THRESHOLD_1_V2 0
typedef struct {
    pd_VecAccountId_V2_t other_signatories;
    pd_Call_t call;
} pd_multisig_as_multi_threshold_1_V2_t;

#define PD_CALL_MULTISIG_AS_MULTI_V2 1
typedef struct {
    pd_u16_t threshold;
    pd_VecAccountId_V2_t other_signatories;
    pd_OptionTimepoint_V2_t maybe_timepoint;
    pd_OpaqueCall_V2_t call;
    pd_bool_t store_call;
    pd_Weight_V2_t max_weight;
} pd_multisig_as_multi_V2_t;

#define PD_CALL_MULTISIG_APPROVE_AS_MULTI_V2 2
typedef struct {
    pd_u16_t threshold;
    pd_VecAccountId_V2_t other_signatories;
    pd_OptionTimepoint_V2_t maybe_timepoint;
    pd_H256_t call_hash;
    pd_Weight_V2_t max_weight;
} pd_multisig_approve_as_multi_V2_t;

#define PD_CALL_MULTISIG_CANCEL_AS_MULTI_V2 3
typedef struct {
    pd_u16_t threshold;
    pd_VecAccountId_V2_t other_signatories;
    pd_Timepoint_V2_t timepoint;
    pd_H256_t call_hash;
} pd_multisig_cancel_as_multi_V2_t;

#define PD_CALL_BALANCES_SET_BALANCE_V2 1
typedef struct {
    pd_LookupasStaticLookupSource_V2_t who;
    pd_CompactBalance_t new_free;
    pd_CompactBalance_t new_reserved;
} pd_balances_set_balance_V2_t;

#endif

typedef union {
    pd_balances_transfer_V2_t balances_transfer_V2;
    pd_balances_force_transfer_V2_t balances_force_transfer_V2;
    pd_balances_transfer_keep_alive_V2_t balances_transfer_keep_alive_V2;
#ifdef SUBSTRATE_PARSER_FULL
#ifndef TARGET_NANOS
#endif
    pd_system_fill_block_V2_t system_fill_block_V2;
    pd_multisig_as_multi_threshold_1_V2_t multisig_as_multi_threshold_1_V2;
    pd_multisig_as_multi_V2_t multisig_as_multi_V2;
    pd_multisig_approve_as_multi_V2_t multisig_approve_as_multi_V2;
    pd_multisig_cancel_as_multi_V2_t multisig_cancel_as_multi_V2;
    pd_balances_set_balance_V2_t balances_set_balance_V2;
#endif
} pd_MethodNested_V2_t;

typedef union {
    pd_MethodBasic_V2_t basic;
    pd_MethodNested_V2_t nested;
} pd_Method_V2_t;

#ifdef __cplusplus
}
#endif

#pragma clang diagnostic pop
