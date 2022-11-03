# Astar 2.35.x

## System

| Name                    | Nano S | Nano S XL          | Nano SP/X          | Nesting            | Arguments                         |
| ----------------------- | ------ | ------------------ | ------------------ | ------------------ | --------------------------------- |
| Fill block              |        | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | `Perbill`ratio<br/>               |
| Remark                  |        |                    |                    |                    | `Vecu8`remark<br/>                |
| Set heap pages          |        |                    |                    |                    | `u64`pages<br/>                   |
| Set code                |        |                    |                    |                    | `Vecu8`code<br/>                  |
| Set code without checks |        |                    |                    |                    | `Vecu8`code<br/>                  |
| Set storage             |        |                    |                    |                    | `VecKeyValue`items<br/>           |
| Kill storage            |        |                    |                    |                    | `VecKey`keys<br/>                 |
| Kill prefix             |        |                    |                    |                    | `Key`prefix<br/>`u32`subkeys<br/> |
| Remark with event       |        |                    |                    |                    | `Vecu8`remark<br/>                |

## Utility

| Name          | Nano S             | Nano S XL          | Nano SP/X          | Nesting | Arguments                                       |
| ------------- | ------------------ | ------------------ | ------------------ | ------- | ----------------------------------------------- |
| Batch         | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: |         | `VecCall`calls<br/>                             |
| As derivative |                    |                    |                    |         | `u16`index<br/>`Call`call<br/>                  |
| Batch all     | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: |         | `VecCall`calls<br/>                             |
| Dispatch as   |                    |                    |                    |         | `BoxPalletsOrigin`as_origin<br/>`Call`call<br/> |
| Force batch   | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: |         | `VecCall`calls<br/>                             |

## Identity

| Name              | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                                                                            |
| ----------------- | ------ | --------- | --------- | ------- | ---------------------------------------------------------------------------------------------------- |
| Add registrar     |        |           |           |         | `AccountId`account<br/>                                                                              |
| Set identity      |        |           |           |         | `BoxIdentityInfoMaxAdditionalFields`info<br/>                                                        |
| Set subs          |        |           |           |         | `VecTupleAccountIdData`subs<br/>                                                                     |
| Clear identity    |        |           |           |         |                                                                                                      |
| Request judgement |        |           |           |         | `Compactu32`reg_index<br/>`Compactu128`max_fee<br/>                                                  |
| Cancel request    |        |           |           |         | `RegistrarIndex`reg_index<br/>                                                                       |
| Set fee           |        |           |           |         | `Compactu32`index<br/>`Compactu128`fee<br/>                                                          |
| Set account id    |        |           |           |         | `Compactu32`index<br/>`AccountId`new\_<br/>                                                          |
| Set fields        |        |           |           |         | `Compactu32`index<br/>`IdentityFields`fields<br/>                                                    |
| Provide judgement |        |           |           |         | `Compactu32`reg_index<br/>`LookupasStaticLookupSource`target<br/>`JudgementBalanceOfT`judgement<br/> |
| Kill identity     |        |           |           |         | `LookupasStaticLookupSource`target<br/>                                                              |
| Add sub           |        |           |           |         | `LookupasStaticLookupSource`sub<br/>`Data`data<br/>                                                  |
| Rename sub        |        |           |           |         | `LookupasStaticLookupSource`sub<br/>`Data`data<br/>                                                  |
| Remove sub        |        |           |           |         | `LookupasStaticLookupSource`sub<br/>                                                                 |
| Quit sub          |        |           |           |         |                                                                                                      |

## Timestamp

| Name | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments            |
| ---- | ------ | --------- | --------- | ------- | -------------------- |
| Set  |        |           |           |         | `Compactu64`now<br/> |

## Multisig

| Name                 | Nano S | Nano S XL          | Nano SP/X          | Nesting            | Arguments                                                                                                                                                     |
| -------------------- | ------ | ------------------ | ------------------ | ------------------ | ------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| As multi threshold 1 |        | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | `VecAccountId`other_signatories<br/>`Call`call<br/>                                                                                                           |
| As multi             |        | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | `u16`threshold<br/>`VecAccountId`other_signatories<br/>`OptionTimepoint`maybe_timepoint<br/>`OpaqueCall`call<br/>`bool`store_call<br/>`Weight`max_weight<br/> |
| Approve as multi     |        | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | `u16`threshold<br/>`VecAccountId`other_signatories<br/>`OptionTimepoint`maybe_timepoint<br/>`H256`call_hash<br/>`Weight`max_weight<br/>                       |
| Cancel as multi      |        | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | `u16`threshold<br/>`VecAccountId`other_signatories<br/>`Timepoint`timepoint<br/>`H256`call_hash<br/>                                                          |

## ParachainSystem

| Name                     | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                        |
| ------------------------ | ------ | --------- | --------- | ------- | -------------------------------- |
| Set validation data      |        |           |           |         | `ParachainInherentData`data<br/> |
| Sudo send upward message |        |           |           |         | `UpwardMessage`message<br/>      |
| Authorize upgrade        |        |           |           |         | `Hash`code_hash<br/>             |
| Enact authorized upgrade |        |           |           |         | `Vecu8`code<br/>                 |

## ParachainInfo

| Name | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments |
| ---- | ------ | --------- | --------- | ------- | --------- |

## Balances

| Name                | Nano S             | Nano S XL          | Nano SP/X          | Nesting            | Arguments                                                                                               |
| ------------------- | ------------------ | ------------------ | ------------------ | ------------------ | ------------------------------------------------------------------------------------------------------- |
| Transfer            | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | `LookupasStaticLookupSource`dest<br/>`CompactBalance`amount<br/>                                        |
| Set balance         |                    | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | `LookupasStaticLookupSource`who<br/>`CompactBalance`new_free<br/>`CompactBalance`new_reserved<br/>      |
| Force transfer      | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | `LookupasStaticLookupSource`source<br/>`LookupasStaticLookupSource`dest<br/>`CompactBalance`amount<br/> |
| Transfer keep alive | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: | `LookupasStaticLookupSource`dest<br/>`CompactBalance`amount<br/>                                        |
| Transfer all        | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: |                    | `LookupasStaticLookupSource`dest<br/>`bool`keep_alive<br/>                                              |
| Force unreserve     |                    | :heavy_check_mark: | :heavy_check_mark: |                    | `LookupasStaticLookupSource`who<br/>`Balance`amount<br/>                                                |

## Vesting

| Name                   | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                                                                                                |
| ---------------------- | ------ | --------- | --------- | ------- | ------------------------------------------------------------------------------------------------------------------------ |
| Vest                   |        |           |           |         |                                                                                                                          |
| Vest other             |        |           |           |         | `LookupasStaticLookupSource`target<br/>                                                                                  |
| Vested transfer        |        |           |           |         | `LookupasStaticLookupSource`target<br/>`VestingInfo`schedule<br/>                                                        |
| Force vested transfer  |        |           |           |         | `LookupasStaticLookupSource`source<br/>`LookupasStaticLookupSource`target<br/>`VestingInfo`schedule<br/>                 |
| Force update schedules |        |           |           |         | `LookupasStaticLookupSource`target<br/>`BoundedVecVestingInfoBalanceOfTBlockNumberMaxVestingSchedulesGetT`schedules<br/> |
| Merge schedules        |        |           |           |         | `u32`schedule1_index<br/>`u32`schedule2_index<br/>                                                                       |

## DappsStaking

| Name                       | Nano S             | Nano S XL          | Nano SP/X          | Nesting | Arguments                                                                                            |
| -------------------------- | ------------------ | ------------------ | ------------------ | ------- | ---------------------------------------------------------------------------------------------------- |
| Register                   | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: |         | `AccountId`developer<br/>`SmartContract`contract_id<br/>                                             |
| Unregister                 | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: |         | `SmartContract`contract_id<br/>                                                                      |
| Withdraw from unregistered | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: |         | `SmartContract`contract_id<br/>                                                                      |
| Bond and stake             | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: |         | `SmartContract`contract_id<br/>`Compactu128`amount<br/>                                              |
| Unbond and unstake         | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: |         | `SmartContract`contract_id<br/>`Compactu128`amount<br/>                                              |
| Withdraw Unbonded          | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: |         |                                                                                                      |
| Nomination transfer        | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: |         | `SmartContract`origin_contract_id<br/>`Compactu128`amount<br/>`SmartContract`target_contract_id<br/> |
| Claim staker               | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: |         | `SmartContract`contract_id<br/>                                                                      |
| Claim dapp                 | :heavy_check_mark: | :heavy_check_mark: | :heavy_check_mark: |         | `SmartContract`contract_id<br/>`Compactu32`era<br/>                                                  |
| Force new era              |                    | :heavy_check_mark: | :heavy_check_mark: |         |                                                                                                      |
| Maintenance mode           |                    | :heavy_check_mark: | :heavy_check_mark: |         | `bool`enable_maintenance<br/>                                                                        |
| Set reward destination     |                    | :heavy_check_mark: | :heavy_check_mark: |         | `DappsRewardDestination`reward_destination<br/>                                                      |
| Set contract stake info    |                    | :heavy_check_mark: | :heavy_check_mark: |         | `SmartContract`contract<br/>`EraIndex`era<br/>`ContractStakeInfoBalanceOfT`contract_stake_info<br/>  |

## BlockReward

| Name              | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                           |
| ----------------- | ------ | --------- | --------- | ------- | --------------------------------------------------- |
| Set configuration |        |           |           |         | `RewardDistributionConfig`reward_distro_params<br/> |

## Assets

| Name                  | Nano S | Nano S XL          | Nano SP/X          | Nesting | Arguments                                                                                                                                                                                                                                                |
| --------------------- | ------ | ------------------ | ------------------ | ------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Create                |        | :heavy_check_mark: | :heavy_check_mark: |         | `Compactu128`id<br/>`LookupasStaticLookupSource`admin<br/>`Balance`min_balance<br/>                                                                                                                                                                      |
| Force create          |        | :heavy_check_mark: | :heavy_check_mark: |         | `Compactu128`id<br/>`LookupasStaticLookupSource`owner<br/>`bool`is_sufficient<br/>`Compactu128`min_balance<br/>                                                                                                                                          |
| Destroy               |        | :heavy_check_mark: | :heavy_check_mark: |         | `Compactu128`id<br/>`DestroyWitness`witness<br/>                                                                                                                                                                                                         |
| Mint                  |        | :heavy_check_mark: | :heavy_check_mark: |         | `Compactu128`id<br/>`LookupasStaticLookupSource`beneficiary<br/>`Compactu128`amount<br/>                                                                                                                                                                 |
| Burn                  |        | :heavy_check_mark: | :heavy_check_mark: |         | `Compactu128`id<br/>`LookupasStaticLookupSource`who<br/>`Compactu128`amount<br/>                                                                                                                                                                         |
| Transfer              |        | :heavy_check_mark: | :heavy_check_mark: |         | `Compactu128`id<br/>`LookupasStaticLookupSource`target<br/>`Compactu128`amount<br/>                                                                                                                                                                      |
| Transfer keep alive   |        | :heavy_check_mark: | :heavy_check_mark: |         | `Compactu128`id<br/>`LookupasStaticLookupSource`target<br/>`Compactu128`amount<br/>                                                                                                                                                                      |
| Force transfer        |        | :heavy_check_mark: | :heavy_check_mark: |         | `Compactu128`id<br/>`LookupasStaticLookupSource`source<br/>`LookupasStaticLookupSource`dest<br/>`Compactu128`amount<br/>                                                                                                                                 |
| Freeze                |        | :heavy_check_mark: | :heavy_check_mark: |         | `Compactu128`id<br/>`LookupasStaticLookupSource`who<br/>                                                                                                                                                                                                 |
| Thaw                  |        | :heavy_check_mark: | :heavy_check_mark: |         | `Compactu128`id<br/>`LookupasStaticLookupSource`who<br/>                                                                                                                                                                                                 |
| Freeze asset          |        | :heavy_check_mark: | :heavy_check_mark: |         | `Compactu128`id<br/>                                                                                                                                                                                                                                     |
| Thaw asset            |        | :heavy_check_mark: | :heavy_check_mark: |         | `Compactu128`id<br/>                                                                                                                                                                                                                                     |
| Transfer ownership    |        | :heavy_check_mark: | :heavy_check_mark: |         | `Compactu128`id<br/>`LookupasStaticLookupSource`owner<br/>                                                                                                                                                                                               |
| Set team              |        | :heavy_check_mark: | :heavy_check_mark: |         | `Compactu128`id<br/>`LookupasStaticLookupSource`issuer<br/>`LookupasStaticLookupSource`admin<br/>`LookupasStaticLookupSource`freezer<br/>                                                                                                                |
| Set metadata          |        | :heavy_check_mark: | :heavy_check_mark: |         | `Compactu128`id<br/>`Vecu8`name<br/>`Vecu8`symbol<br/>`u8`decimals<br/>                                                                                                                                                                                  |
| Clear metadata        |        | :heavy_check_mark: | :heavy_check_mark: |         | `Compactu128`id<br/>                                                                                                                                                                                                                                     |
| Force set metadata    |        | :heavy_check_mark: | :heavy_check_mark: |         | `Compactu128`id<br/>`Vecu8`name<br/>`Vecu8`symbol<br/>`u8`decimals<br/>`bool`is_frozen<br/>                                                                                                                                                              |
| Force clear metadata  |        | :heavy_check_mark: | :heavy_check_mark: |         | `Compactu128`id<br/>                                                                                                                                                                                                                                     |
| Force asset status    |        | :heavy_check_mark: | :heavy_check_mark: |         | `Compactu128`id<br/>`LookupasStaticLookupSource`owner<br/>`LookupasStaticLookupSource`issuer<br/>`LookupasStaticLookupSource`admin<br/>`LookupasStaticLookupSource`freezer<br/>`Compactu128`min_balance<br/>`bool`is_sufficient<br/>`bool`is_frozen<br/> |
| Approve transfer      |        | :heavy_check_mark: | :heavy_check_mark: |         | `Compactu128`id<br/>`LookupasStaticLookupSource`delegate<br/>`Compactu128`amount<br/>                                                                                                                                                                    |
| Cancel approval       |        | :heavy_check_mark: | :heavy_check_mark: |         | `Compactu128`id<br/>`LookupasStaticLookupSource`delegate<br/>                                                                                                                                                                                            |
| Force cancel approval |        | :heavy_check_mark: | :heavy_check_mark: |         | `Compactu128`id<br/>`LookupasStaticLookupSource`owner<br/>`LookupasStaticLookupSource`delegate<br/>                                                                                                                                                      |
| Transfer approved     |        | :heavy_check_mark: | :heavy_check_mark: |         | `Compactu128`id<br/>`LookupasStaticLookupSource`owner<br/>`LookupasStaticLookupSource`destination<br/>`Compactu128`amount<br/>                                                                                                                           |
| Touch                 |        | :heavy_check_mark: | :heavy_check_mark: |         | `Compactu128`id<br/>                                                                                                                                                                                                                                     |
| Refund                |        | :heavy_check_mark: | :heavy_check_mark: |         | `Compactu128`id<br/>`bool`allow_burn<br/>                                                                                                                                                                                                                |

## Authorship

| Name       | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                  |
| ---------- | ------ | --------- | --------- | ------- | -------------------------- |
| Set uncles |        |           |           |         | `VecHeader`new_uncles<br/> |

## CollatorSelection

| Name                   | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                |
| ---------------------- | ------ | --------- | --------- | ------- | ------------------------ |
| Set invulnerables      |        |           |           |         | `VecAccountId`new\_<br/> |
| Set desired candidates |        |           |           |         | `u32`max<br/>            |
| Set candidacy bond     |        |           |           |         | `Balance`bond<br/>       |
| Register as candidate  |        |           |           |         |                          |
| Leave intent           |        |           |           |         |                          |

## Session

| Name       | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                        |
| ---------- | ------ | --------- | --------- | ------- | -------------------------------- |
| Set keys   |        |           |           |         | `Keys`keys<br/>`Bytes`proof<br/> |
| Purge keys |        |           |           |         |                                  |

## XcmpQueue

| Name                              | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                            |
| --------------------------------- | ------ | --------- | --------- | ------- | ---------------------------------------------------- |
| Service overweight                |        |           |           |         | `OverweightIndex`index<br/>`Weight`weight_limit<br/> |
| Suspend xcm execution             |        |           |           |         |                                                      |
| Resume xcm execution              |        |           |           |         |                                                      |
| Update suspend threshold          |        |           |           |         | `u32`new\_<br/>                                      |
| Update drop threshold             |        |           |           |         | `u32`new\_<br/>                                      |
| Update resume threshold           |        |           |           |         | `u32`new\_<br/>                                      |
| Update threshold weight           |        |           |           |         | `Weight`new\_<br/>                                   |
| Update weight restrict decay      |        |           |           |         | `Weight`new\_<br/>                                   |
| Update xcmp max individual weight |        |           |           |         | `Weight`new\_<br/>                                   |

## PolkadotXcm

| Name                             | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                                                                                                                                                 |
| -------------------------------- | ------ | --------- | --------- | ------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Send                             |        |           |           |         | `BoxVersionedMultiLocation`dest<br/>`BoxVersionedXcmTuple`message<br/>                                                                                                    |
| Teleport assets                  |        |           |           |         | `BoxVersionedMultiLocation`dest<br/>`BoxVersionedMultiLocation`beneficiary<br/>`BoxVersionedMultiAssets`assets<br/>`u32`fee_asset_item<br/>                               |
| Reserve transfer assets          |        |           |           |         | `BoxVersionedMultiLocation`dest<br/>`BoxVersionedMultiLocation`beneficiary<br/>`BoxVersionedMultiAssets`assets<br/>`u32`fee_asset_item<br/>                               |
| Reserve withdraw assets          |        |           |           |         | `BoxVersionedMultiLocation`dest<br/>`BoxVersionedMultiLocation`beneficiary<br/>`BoxVersionedMultiAssets`assets<br/>`u32`fee_asset_item<br/>                               |
| Execute                          |        |           |           |         | `BoxVersionedXcmTasSysConfigCall`message<br/>`Weight`max_weight<br/>                                                                                                      |
| Force xcm version                |        |           |           |         | `BoxMultiLocation`location<br/>`XcmVersion`xcm_version<br/>                                                                                                               |
| Force default xcm version        |        |           |           |         | `OptionXcmVersion`maybe_xcm_version<br/>                                                                                                                                  |
| Force subscribe version notify   |        |           |           |         | `BoxVersionedMultiLocation`location<br/>                                                                                                                                  |
| Force unsubscribe version notify |        |           |           |         | `BoxVersionedMultiLocation`location<br/>                                                                                                                                  |
| Limited reserve transfer assets  |        |           |           |         | `BoxVersionedMultiLocation`dest<br/>`BoxVersionedMultiLocation`beneficiary<br/>`BoxVersionedMultiAssets`assets<br/>`u32`fee_asset_item<br/>`WeightLimit`weight_limit<br/> |
| Limited teleport assets          |        |           |           |         | `BoxVersionedMultiLocation`dest<br/>`BoxVersionedMultiLocation`beneficiary<br/>`BoxVersionedMultiAssets`assets<br/>`u32`fee_asset_item<br/>`WeightLimit`weight_limit<br/> |
| Limited reserve withdraw assets  |        |           |           |         | `BoxVersionedMultiLocation`dest<br/>`BoxVersionedMultiLocation`beneficiary<br/>`BoxVersionedMultiAssets`assets<br/>`u32`fee_asset_item<br/>`WeightLimit`weight_limit<br/> |

## CumulusXcm

| Name | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments |
| ---- | ------ | --------- | --------- | ------- | --------- |

## DmpQueue

| Name               | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                            |
| ------------------ | ------ | --------- | --------- | ------- | ---------------------------------------------------- |
| Service overweight |        |           |           |         | `OverweightIndex`index<br/>`Weight`weight_limit<br/> |

## XcAssetConfig

| Name                           | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                                                        |
| ------------------------------ | ------ | --------- | --------- | ------- | -------------------------------------------------------------------------------- |
| Register asset location        |        |           |           |         | `BoxVersionedMultiLocation`asset_location<br/>`Compactu128`asset_id<br/>         |
| Set asset units per second     |        |           |           |         | `BoxVersionedMultiLocation`asset_location<br/>`Compactu128`units_per_second<br/> |
| Change existing asset location |        |           |           |         | `BoxVersionedMultiLocation`new_asset_location<br/>`Compactu128`asset_id<br/>     |
| Remove payment asset           |        |           |           |         | `BoxVersionedMultiLocation`asset_location<br/>                                   |
| Remove asset                   |        |           |           |         | `Compactu128`asset_id<br/>                                                       |

## EVM

| Name     | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                                                                                                                                                                                            |
| -------- | ------ | --------- | --------- | ------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Withdraw |        |           |           |         | `H160`address<br/>`Balance`amount<br/>                                                                                                                                                                               |
| Call     |        |           |           |         | `H160`source<br/>`H160`target<br/>`Vecu8`input<br/>`U256`value<br/>`u64`gas_limit<br/>`U256`max_fee_per_gas<br/>`OptionU256`max_priority_fee_per_gas<br/>`OptionU256`nonce<br/>`VecTupleH160VecH256`access_list<br/> |
| Create   |        |           |           |         | `H160`source<br/>`Vecu8`init<br/>`U256`value<br/>`u64`gas_limit<br/>`U256`max_fee_per_gas<br/>`OptionU256`max_priority_fee_per_gas<br/>`OptionU256`nonce<br/>`VecTupleH160VecH256`access_list<br/>                   |
| Create2  |        |           |           |         | `H160`source<br/>`Vecu8`init<br/>`H256`salt<br/>`U256`value<br/>`u64`gas_limit<br/>`U256`max_fee_per_gas<br/>`OptionU256`max_priority_fee_per_gas<br/>`OptionU256`nonce<br/>`VecTupleH160VecH256`access_list<br/>    |

## Ethereum

| Name     | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                     |
| -------- | ------ | --------- | --------- | ------- | ----------------------------- |
| Transact |        |           |           |         | `Transaction`transaction<br/> |

## EthCall

| Name | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                                                        |
| ---- | ------ | --------- | --------- | ------- | -------------------------------------------------------------------------------- |
| Call |        |           |           |         | `Call`call<br/>`AccountId`signer<br/>`Vecu8`signature<br/>`Compactu32`nonce<br/> |

## BaseFee

| Name                 | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                |
| -------------------- | ------ | --------- | --------- | ------- | ------------------------ |
| Set base fee per gas |        |           |           |         | `U256`fee<br/>           |
| Set elasticity       |        |           |           |         | `Permill`elasticity<br/> |

## Sudo

| Name                  | Nano S | Nano S XL | Nano SP/X | Nesting | Arguments                                           |
| --------------------- | ------ | --------- | --------- | ------- | --------------------------------------------------- |
| Sudo                  |        |           |           |         | `Call`call<br/>                                     |
| Sudo unchecked weight |        |           |           |         | `Call`call<br/>`Weight`weight<br/>                  |
| Set key               |        |           |           |         | `LookupasStaticLookupSource`new\_<br/>              |
| Sudo as               |        |           |           |         | `LookupasStaticLookupSource`who<br/>`Call`call<br/> |
