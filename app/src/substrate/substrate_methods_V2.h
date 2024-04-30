/*******************************************************************************
 *  (c) 2019 - 2024 Zondax AG
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
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wextern-c-compat"

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
#define PD_CALL_PROXY_V2 15
#define PD_CALL_BALANCES_V2 31
#define PD_CALL_VESTING_V2 32
#define PD_CALL_DAPPSTAKING_V2 34
#define PD_CALL_ASSETS_V2 36
#define PD_CALL_EVM_V2 60
#define PD_CALL_DAPPSTAKINGMIGRATION_V2 254

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

#ifdef SUBSTRATE_PARSER_FULL
#ifndef TARGET_NANOS
#endif

#define PD_CALL_UTILITY_WITH_WEIGHT_V2 5
typedef struct {
    pd_Call_t call;
    pd_Weight_t weight;
} pd_utility_with_weight_V2_t;

#define PD_CALL_PROXY_REMOVE_PROXIES_V2 3
typedef struct {
} pd_proxy_remove_proxies_V2_t;

#define PD_CALL_PROXY_ANNOUNCE_V2 6
typedef struct {
    pd_AccountIdLookupOfT_t real;
    pd_CallHashOf_t call_hash;
} pd_proxy_announce_V2_t;

#define PD_CALL_PROXY_REMOVE_ANNOUNCEMENT_V2 7
typedef struct {
    pd_AccountIdLookupOfT_t real;
    pd_CallHashOf_t call_hash;
} pd_proxy_remove_announcement_V2_t;

#define PD_CALL_PROXY_REJECT_ANNOUNCEMENT_V2 8
typedef struct {
    pd_AccountIdLookupOfT_t delegate;
    pd_CallHashOf_t call_hash;
} pd_proxy_reject_announcement_V2_t;

#define PD_CALL_PROXY_PROXY_ANNOUNCED_V2 9
typedef struct {
    pd_AccountIdLookupOfT_t delegate;
    pd_AccountIdLookupOfT_t real;
    pd_OptionProxyType_t force_proxy_type;
    pd_Call_t call;
} pd_proxy_proxy_announced_V2_t;

#define PD_CALL_BALANCES_FORCE_UNRESERVE_V2 5
typedef struct {
    pd_AccountIdLookupOfT_t who;
    pd_Balance_t amount;
} pd_balances_force_unreserve_V2_t;

#define PD_CALL_BALANCES_UPGRADE_ACCOUNTS_V2 6
typedef struct {
    pd_VecAccountId_t who;
} pd_balances_upgrade_accounts_V2_t;

#define PD_CALL_BALANCES_FORCE_SET_BALANCE_V2 8
typedef struct {
    pd_AccountIdLookupOfT_t who;
    pd_CompactBalance_t new_free;
} pd_balances_force_set_balance_V2_t;

#define PD_CALL_ASSETS_CREATE_V2 0
typedef struct {
    pd_CompactBalance_t id;
    pd_AccountIdLookupOfT_t admin;
    pd_Balance_t min_balance;
} pd_assets_create_V2_t;

#define PD_CALL_ASSETS_FORCE_CREATE_V2 1
typedef struct {
    pd_CompactBalance_t id;
    pd_AccountIdLookupOfT_t owner;
    pd_bool_t is_sufficient;
    pd_CompactBalance_t min_balance;
} pd_assets_force_create_V2_t;

#define PD_CALL_ASSETS_START_DESTROY_V2 2
typedef struct {
    pd_CompactBalance_t id;
} pd_assets_start_destroy_V2_t;

#define PD_CALL_ASSETS_DESTROY_ACCOUNTS_V2 3
typedef struct {
    pd_CompactBalance_t id;
} pd_assets_destroy_accounts_V2_t;

#define PD_CALL_ASSETS_DESTROY_APPROVALS_V2 4
typedef struct {
    pd_CompactBalance_t id;
} pd_assets_destroy_approvals_V2_t;

#define PD_CALL_ASSETS_FINISH_DESTROY_V2 5
typedef struct {
    pd_CompactBalance_t id;
} pd_assets_finish_destroy_V2_t;

#define PD_CALL_ASSETS_MINT_V2 6
typedef struct {
    pd_CompactBalance_t id;
    pd_AccountIdLookupOfT_t beneficiary;
    pd_CompactBalance_t amount;
} pd_assets_mint_V2_t;

#define PD_CALL_ASSETS_BURN_V2 7
typedef struct {
    pd_CompactBalance_t id;
    pd_AccountIdLookupOfT_t who;
    pd_CompactBalance_t amount;
} pd_assets_burn_V2_t;

#define PD_CALL_ASSETS_TRANSFER_V2 8
typedef struct {
    pd_CompactBalance_t id;
    pd_AccountIdLookupOfT_t target;
    pd_CompactBalance_t amount;
} pd_assets_transfer_V2_t;

#define PD_CALL_ASSETS_TRANSFER_KEEP_ALIVE_V2 9
typedef struct {
    pd_CompactBalance_t id;
    pd_AccountIdLookupOfT_t target;
    pd_CompactBalance_t amount;
} pd_assets_transfer_keep_alive_V2_t;

#define PD_CALL_ASSETS_FORCE_TRANSFER_V2 10
typedef struct {
    pd_CompactBalance_t id;
    pd_AccountIdLookupOfT_t source;
    pd_AccountIdLookupOfT_t dest;
    pd_CompactBalance_t amount;
} pd_assets_force_transfer_V2_t;

#define PD_CALL_ASSETS_FREEZE_V2 11
typedef struct {
    pd_CompactBalance_t id;
    pd_AccountIdLookupOfT_t who;
} pd_assets_freeze_V2_t;

#define PD_CALL_ASSETS_THAW_V2 12
typedef struct {
    pd_CompactBalance_t id;
    pd_AccountIdLookupOfT_t who;
} pd_assets_thaw_V2_t;

#define PD_CALL_ASSETS_FREEZE_ASSET_V2 13
typedef struct {
    pd_CompactBalance_t id;
} pd_assets_freeze_asset_V2_t;

#define PD_CALL_ASSETS_THAW_ASSET_V2 14
typedef struct {
    pd_CompactBalance_t id;
} pd_assets_thaw_asset_V2_t;

#define PD_CALL_ASSETS_TRANSFER_OWNERSHIP_V2 15
typedef struct {
    pd_CompactBalance_t id;
    pd_AccountIdLookupOfT_t owner;
} pd_assets_transfer_ownership_V2_t;

#define PD_CALL_ASSETS_SET_TEAM_V2 16
typedef struct {
    pd_CompactBalance_t id;
    pd_AccountIdLookupOfT_t issuer;
    pd_AccountIdLookupOfT_t admin;
    pd_AccountIdLookupOfT_t freezer;
} pd_assets_set_team_V2_t;

#define PD_CALL_ASSETS_SET_METADATA_V2 17
typedef struct {
    pd_CompactBalance_t id;
    pd_Vecu8_t name;
    pd_Vecu8_t symbol;
    pd_u8_t decimals;
} pd_assets_set_metadata_V2_t;

#define PD_CALL_ASSETS_CLEAR_METADATA_V2 18
typedef struct {
    pd_CompactBalance_t id;
} pd_assets_clear_metadata_V2_t;

#define PD_CALL_ASSETS_FORCE_SET_METADATA_V2 19
typedef struct {
    pd_CompactBalance_t id;
    pd_Vecu8_t name;
    pd_Vecu8_t symbol;
    pd_u8_t decimals;
    pd_bool_t is_frozen;
} pd_assets_force_set_metadata_V2_t;

#define PD_CALL_ASSETS_FORCE_CLEAR_METADATA_V2 20
typedef struct {
    pd_CompactBalance_t id;
} pd_assets_force_clear_metadata_V2_t;

#define PD_CALL_ASSETS_FORCE_ASSET_STATUS_V2 21
typedef struct {
    pd_CompactBalance_t id;
    pd_AccountIdLookupOfT_t owner;
    pd_AccountIdLookupOfT_t issuer;
    pd_AccountIdLookupOfT_t admin;
    pd_AccountIdLookupOfT_t freezer;
    pd_CompactBalance_t min_balance;
    pd_bool_t is_sufficient;
    pd_bool_t is_frozen;
} pd_assets_force_asset_status_V2_t;

#define PD_CALL_ASSETS_APPROVE_TRANSFER_V2 22
typedef struct {
    pd_CompactBalance_t id;
    pd_AccountIdLookupOfT_t delegate;
    pd_CompactBalance_t amount;
} pd_assets_approve_transfer_V2_t;

#define PD_CALL_ASSETS_CANCEL_APPROVAL_V2 23
typedef struct {
    pd_CompactBalance_t id;
    pd_AccountIdLookupOfT_t delegate;
} pd_assets_cancel_approval_V2_t;

#define PD_CALL_ASSETS_FORCE_CANCEL_APPROVAL_V2 24
typedef struct {
    pd_CompactBalance_t id;
    pd_AccountIdLookupOfT_t owner;
    pd_AccountIdLookupOfT_t delegate;
} pd_assets_force_cancel_approval_V2_t;

#define PD_CALL_ASSETS_TRANSFER_APPROVED_V2 25
typedef struct {
    pd_CompactBalance_t id;
    pd_AccountIdLookupOfT_t owner;
    pd_AccountIdLookupOfT_t destination;
    pd_CompactBalance_t amount;
} pd_assets_transfer_approved_V2_t;

#define PD_CALL_ASSETS_TOUCH_V2 26
typedef struct {
    pd_CompactBalance_t id;
} pd_assets_touch_V2_t;

#define PD_CALL_ASSETS_REFUND_V2 27
typedef struct {
    pd_CompactBalance_t id;
    pd_bool_t allow_burn;
} pd_assets_refund_V2_t;

#define PD_CALL_ASSETS_SET_MIN_BALANCE_V2 28
typedef struct {
    pd_CompactBalance_t id;
    pd_Balance_t min_balance;
} pd_assets_set_min_balance_V2_t;

#define PD_CALL_ASSETS_TOUCH_OTHER_V2 29
typedef struct {
    pd_CompactBalance_t id;
    pd_AccountIdLookupOfT_t who;
} pd_assets_touch_other_V2_t;

#define PD_CALL_ASSETS_REFUND_OTHER_V2 30
typedef struct {
    pd_CompactBalance_t id;
    pd_AccountIdLookupOfT_t who;
} pd_assets_refund_other_V2_t;

#define PD_CALL_ASSETS_BLOCK_V2 31
typedef struct {
    pd_CompactBalance_t id;
    pd_AccountIdLookupOfT_t who;
} pd_assets_block_V2_t;

#endif

typedef union {
    pd_utility_batch_V2_t utility_batch_V2;
    pd_utility_batch_all_V2_t utility_batch_all_V2;
    pd_utility_force_batch_V2_t utility_force_batch_V2;
#ifdef SUBSTRATE_PARSER_FULL
#ifndef TARGET_NANOS
#endif
    pd_utility_with_weight_V2_t utility_with_weight_V2;
    pd_proxy_remove_proxies_V2_t proxy_remove_proxies_V2;
    pd_proxy_announce_V2_t proxy_announce_V2;
    pd_proxy_remove_announcement_V2_t proxy_remove_announcement_V2;
    pd_proxy_reject_announcement_V2_t proxy_reject_announcement_V2;
    pd_proxy_proxy_announced_V2_t proxy_proxy_announced_V2;
    pd_balances_force_unreserve_V2_t balances_force_unreserve_V2;
    pd_balances_upgrade_accounts_V2_t balances_upgrade_accounts_V2;
    pd_balances_force_set_balance_V2_t balances_force_set_balance_V2;
    pd_assets_create_V2_t assets_create_V2;
    pd_assets_force_create_V2_t assets_force_create_V2;
    pd_assets_start_destroy_V2_t assets_start_destroy_V2;
    pd_assets_destroy_accounts_V2_t assets_destroy_accounts_V2;
    pd_assets_destroy_approvals_V2_t assets_destroy_approvals_V2;
    pd_assets_finish_destroy_V2_t assets_finish_destroy_V2;
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
    pd_assets_set_min_balance_V2_t assets_set_min_balance_V2;
    pd_assets_touch_other_V2_t assets_touch_other_V2;
    pd_assets_refund_other_V2_t assets_refund_other_V2;
    pd_assets_block_V2_t assets_block_V2;
#endif
} pd_MethodBasic_V2_t;

#define PD_CALL_BALANCES_TRANSFER_ALLOW_DEATH_V2 0
typedef struct {
    pd_AccountIdLookupOfT_t dest;
    pd_CompactBalance_t amount;
} pd_balances_transfer_allow_death_V2_t;

#define PD_CALL_BALANCES_FORCE_TRANSFER_V2 2
typedef struct {
    pd_AccountIdLookupOfT_t source;
    pd_AccountIdLookupOfT_t dest;
    pd_CompactBalance_t amount;
} pd_balances_force_transfer_V2_t;

#define PD_CALL_BALANCES_TRANSFER_KEEP_ALIVE_V2 3
typedef struct {
    pd_AccountIdLookupOfT_t dest;
    pd_CompactBalance_t amount;
} pd_balances_transfer_keep_alive_V2_t;

#define PD_CALL_BALANCES_TRANSFER_ALL_V2 4
typedef struct {
    pd_AccountIdLookupOfT_t dest;
    pd_bool_t keep_alive;
} pd_balances_transfer_all_V2_t;

#define PD_CALL_BALANCES_TRANSFER_V2 7
typedef struct {
    pd_AccountIdLookupOfT_t dest;
    pd_CompactBalance_t amount;
} pd_balances_transfer_V2_t;

#define PD_CALL_VESTING_VEST_V2 0
typedef struct {
} pd_vesting_vest_V2_t;

#define PD_CALL_VESTING_VEST_OTHER_V2 1
typedef struct {
    pd_AccountIdLookupOfT_t target;
} pd_vesting_vest_other_V2_t;

#define PD_CALL_VESTING_VESTED_TRANSFER_V2 2
typedef struct {
    pd_AccountIdLookupOfT_t target;
    pd_VestingInfo_t schedule;
} pd_vesting_vested_transfer_V2_t;

#define PD_CALL_VESTING_FORCE_VESTED_TRANSFER_V2 3
typedef struct {
    pd_AccountIdLookupOfT_t source;
    pd_AccountIdLookupOfT_t target;
    pd_VestingInfo_t schedule;
} pd_vesting_force_vested_transfer_V2_t;

#define PD_CALL_VESTING_MERGE_SCHEDULES_V2 4
typedef struct {
    pd_u32_t schedule1_index;
    pd_u32_t schedule2_index;
} pd_vesting_merge_schedules_V2_t;

#define PD_CALL_DAPPSTAKING_UNBOND_AND_UNSTAKE_V2 4
typedef struct {
    pd_SmartContract_t contract_id;
    pd_Compactu128_t amount;
} pd_dappstaking_unbond_and_unstake_V2_t;

#define PD_CALL_DAPPSTAKING_WITHDRAW_UNBONDED_V2 5
typedef struct {
} pd_dappstaking_withdraw_unbonded_V2_t;

#define PD_CALL_DAPPSTAKING_MAINTENANCE_MODE_V2 0
typedef struct {
    pd_bool_t enabled;
} pd_dappstaking_maintenance_mode_V2_t;

#define PD_CALL_DAPPSTAKING_REGISTER_V2 1
typedef struct {
    pd_AccountId_t owner;
    pd_SmartContract_t smart_contract;
} pd_dappstaking_register_V2_t;

#define PD_CALL_DAPPSTAKING_SET_DAPP_REWARD_BENEFICIARY_V2 2
typedef struct {
    pd_SmartContract_t smart_contract;
    pd_OptionAccountId_t beneficiary;
} pd_dappstaking_set_dapp_reward_beneficiary_V2_t;

#define PD_CALL_DAPPSTAKING_SET_DAPP_OWNER_V2 3
typedef struct {
    pd_SmartContract_t smart_contract;
    pd_AccountId_t new_owner;
} pd_dappstaking_set_dapp_owner_V2_t;

#define PD_CALL_DAPPSTAKING_UNREGISTER_V2 6
typedef struct {
    pd_SmartContract_t smart_contract;
} pd_dappstaking_unregister_V2_t;

#define PD_CALL_DAPPSTAKING_LOCK_V2 7
typedef struct {
    pd_Compactu128_t amount;
} pd_dappstaking_lock_V2_t;

#define PD_CALL_DAPPSTAKING_UNLOCK_V2 8
typedef struct {
    pd_Compactu128_t amount;
} pd_dappstaking_unlock_V2_t;

#define PD_CALL_DAPPSTAKING_CLAIM_UNLOCKED_V2 9
typedef struct {
} pd_dappstaking_claim_unlocked_V2_t;

#define PD_CALL_DAPPSTAKING_RELOCK_UNLOCKING_V2 10
typedef struct {
} pd_dappstaking_relock_unlocking_V2_t;

#define PD_CALL_DAPPSTAKING_STAKE_V2 11
typedef struct {
    pd_SmartContract_t smart_contract;
    pd_Compactu128_t amount;
} pd_dappstaking_stake_V2_t;

#define PD_CALL_DAPPSTAKING_UNSTAKE_V2 12
typedef struct {
    pd_SmartContract_t smart_contract;
    pd_Compactu128_t amount;
} pd_dappstaking_unstake_V2_t;

#define PD_CALL_DAPPSTAKING_CLAIM_STAKER_REWARDS_V2 13
typedef struct {
} pd_dappstaking_claim_staker_rewards_V2_t;

#define PD_CALL_DAPPSTAKING_CLAIM_BONUS_REWARD_V2 14
typedef struct {
    pd_SmartContract_t smart_contract;
} pd_dappstaking_claim_bonus_reward_V2_t;

#define PD_CALL_DAPPSTAKING_CLAIM_DAPP_REWARD_V2 15
typedef struct {
    pd_SmartContract_t smart_contract;
    pd_Compactu32_t era;
} pd_dappstaking_claim_dapp_reward_V2_t;

#define PD_CALL_DAPPSTAKING_UNSTAKE_FROM_UNREGISTERED_V2 16
typedef struct {
    pd_SmartContract_t smart_contract;
} pd_dappstaking_unstake_from_unregistered_V2_t;

#define PD_CALL_DAPPSTAKING_CLEANUP_EXPIRED_ENTRIES_V2 17
typedef struct {
} pd_dappstaking_cleanup_expired_entries_V2_t;

#define PD_CALL_EVM_WITHDRAW_V2 0
typedef struct {
    pd_H160_t address;
    pd_Balance_t amount;
} pd_evm_withdraw_V2_t;

#define PD_CALL_DAPPSTAKINGMIGRATION_MIGRATE_V2 0
typedef struct {
    pd_OptionWeight_t weight_limit;
} pd_dappstakingmigration_migrate_V2_t;

#ifdef SUBSTRATE_PARSER_FULL
#ifndef TARGET_NANOS
#endif
#define PD_CALL_SYSTEM_REMARK_V2 0
typedef struct {
    pd_Bytes_t remark;
} pd_system_remark_V2_t;

#define PD_CALL_MULTISIG_AS_MULTI_THRESHOLD_1_V2 0
typedef struct {
    pd_VecAccountId_t other_signatories;
    pd_Call_t call;
} pd_multisig_as_multi_threshold_1_V2_t;

#define PD_CALL_MULTISIG_AS_MULTI_V2 1
typedef struct {
    pd_u16_t threshold;
    pd_VecAccountId_t other_signatories;
    pd_OptionTimepoint_t maybe_timepoint;
    pd_Call_t call;
    pd_Weight_t max_weight;
} pd_multisig_as_multi_V2_t;

#define PD_CALL_MULTISIG_APPROVE_AS_MULTI_V2 2
typedef struct {
    pd_u16_t threshold;
    pd_VecAccountId_t other_signatories;
    pd_OptionTimepoint_t maybe_timepoint;
    pd_H256_t call_hash;
    pd_Weight_t max_weight;
} pd_multisig_approve_as_multi_V2_t;

#define PD_CALL_MULTISIG_CANCEL_AS_MULTI_V2 3
typedef struct {
    pd_u16_t threshold;
    pd_VecAccountId_t other_signatories;
    pd_Timepoint_t timepoint;
    pd_H256_t call_hash;
} pd_multisig_cancel_as_multi_V2_t;

#define PD_CALL_PROXY_PROXY_V2 0
typedef struct {
    pd_AccountIdLookupOfT_t real;
    pd_OptionProxyType_t force_proxy_type;
    pd_Call_t call;
} pd_proxy_proxy_V2_t;

#define PD_CALL_PROXY_ADD_PROXY_V2 1
typedef struct {
    pd_AccountIdLookupOfT_t delegate;
    pd_ProxyType_t proxy_type;
    pd_BlockNumber_t delay;
} pd_proxy_add_proxy_V2_t;

#define PD_CALL_PROXY_REMOVE_PROXY_V2 2
typedef struct {
    pd_AccountIdLookupOfT_t delegate;
    pd_ProxyType_t proxy_type;
    pd_BlockNumber_t delay;
} pd_proxy_remove_proxy_V2_t;

#define PD_CALL_PROXY_CREATE_PURE_V2 4
typedef struct {
    pd_ProxyType_t proxy_type;
    pd_BlockNumber_t delay;
    pd_u16_t index;
} pd_proxy_create_pure_V2_t;

#define PD_CALL_PROXY_KILL_PURE_V2 5
typedef struct {
    pd_AccountIdLookupOfT_t spawner;
    pd_ProxyType_t proxy_type;
    pd_u16_t index;
    pd_Compactu32_t height;
    pd_Compactu32_t ext_index;
} pd_proxy_kill_pure_V2_t;

#define PD_CALL_BALANCES_SET_BALANCE_DEPRECATED_V2 1
typedef struct {
    pd_AccountIdLookupOfT_t who;
    pd_CompactBalance_t new_free;
    pd_CompactBalance_t old_reserved;
} pd_balances_set_balance_deprecated_V2_t;

#endif

typedef union {
    pd_balances_transfer_allow_death_V2_t balances_transfer_allow_death_V2;
    pd_balances_force_transfer_V2_t balances_force_transfer_V2;
    pd_balances_transfer_keep_alive_V2_t balances_transfer_keep_alive_V2;
    pd_balances_transfer_all_V2_t balances_transfer_all_V2;
    pd_balances_transfer_V2_t balances_transfer_V2;
    pd_vesting_vest_V2_t vesting_vest_V2;
    pd_vesting_vest_other_V2_t vesting_vest_other_V2;
    pd_vesting_vested_transfer_V2_t vesting_vested_transfer_V2;
    pd_vesting_force_vested_transfer_V2_t vesting_force_vested_transfer_V2;
    pd_vesting_merge_schedules_V2_t vesting_merge_schedules_V2;
    pd_dappstaking_unbond_and_unstake_V2_t dappstaking_unbond_and_unstake_V2;
    pd_dappstaking_withdraw_unbonded_V2_t dappstaking_withdraw_unbonded_V2;
    pd_dappstaking_maintenance_mode_V2_t dappstaking_maintenance_mode_V2;
    pd_dappstaking_register_V2_t dappstaking_register_V2;
    pd_dappstaking_set_dapp_reward_beneficiary_V2_t dappstaking_set_dapp_reward_beneficiary_V2;
    pd_dappstaking_set_dapp_owner_V2_t dappstaking_set_dapp_owner_V2;
    pd_dappstaking_unregister_V2_t dappstaking_unregister_V2;
    pd_dappstaking_lock_V2_t dappstaking_lock_V2;
    pd_dappstaking_unlock_V2_t dappstaking_unlock_V2;
    pd_dappstaking_claim_unlocked_V2_t dappstaking_claim_unlocked_V2;
    pd_dappstaking_relock_unlocking_V2_t dappstaking_relock_unlocking_V2;
    pd_dappstaking_stake_V2_t dappstaking_stake_V2;
    pd_dappstaking_unstake_V2_t dappstaking_unstake_V2;
    pd_dappstaking_claim_staker_rewards_V2_t dappstaking_claim_staker_rewards_V2;
    pd_dappstaking_claim_bonus_reward_V2_t dappstaking_claim_bonus_reward_V2;
    pd_dappstaking_claim_dapp_reward_V2_t dappstaking_claim_dapp_reward_V2;
    pd_dappstaking_unstake_from_unregistered_V2_t dappstaking_unstake_from_unregistered_V2;
    pd_dappstaking_cleanup_expired_entries_V2_t dappstaking_cleanup_expired_entries_V2;
    pd_evm_withdraw_V2_t evm_withdraw_V2;
    pd_dappstakingmigration_migrate_V2_t dappstakingmigration_migrate_V2;
#ifdef SUBSTRATE_PARSER_FULL
#ifndef TARGET_NANOS
#endif
    pd_system_remark_V2_t system_remark_V2;
    pd_multisig_as_multi_threshold_1_V2_t multisig_as_multi_threshold_1_V2;
    pd_multisig_as_multi_V2_t multisig_as_multi_V2;
    pd_multisig_approve_as_multi_V2_t multisig_approve_as_multi_V2;
    pd_multisig_cancel_as_multi_V2_t multisig_cancel_as_multi_V2;
    pd_proxy_proxy_V2_t proxy_proxy_V2;
    pd_proxy_add_proxy_V2_t proxy_add_proxy_V2;
    pd_proxy_remove_proxy_V2_t proxy_remove_proxy_V2;
    pd_proxy_create_pure_V2_t proxy_create_pure_V2;
    pd_proxy_kill_pure_V2_t proxy_kill_pure_V2;
    pd_balances_set_balance_deprecated_V2_t balances_set_balance_deprecated_V2;
#endif
} pd_MethodNested_V2_t;

typedef union {
    pd_MethodBasic_V2_t basic;
    pd_MethodNested_V2_t nested;
} pd_Method_V2_t;

#ifdef __cplusplus
}
#pragma clang diagnostic pop
#endif
