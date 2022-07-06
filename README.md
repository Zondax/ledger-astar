# Ledger Astar App

[![License](https://img.shields.io/badge/License-Apache%202.0-blue.svg)](https://opensource.org/licenses/Apache-2.0)
[![GithubActions](https://github.com/zondax/ledger-astar/actions/workflows/main.yml/badge.svg)](https://github.com/Zondax/ledger-astar/blob/main/.github/workflows/main.yaml)

---

![zondax_light](docs/zondax_light.png#gh-light-mode-only)
![zondax_dark](docs/zondax_dark.png#gh-dark-mode-only)

_Please visit our website at [zondax.ch](https://www.zondax.ch)_

---

This project contains the Astar app (https://astar.network/) for Ledger Nano S and X.

- Ledger Nano S/X BOLOS app
- Specs / Documentation
- C++ unit tests
- Zemu tests

For more information: [How to build](docs/build.md)

## ATTENTION

Please:

- **Do not use in production**
- **Do not use a Ledger device with funds for development purposes.**
- **Have a separate and marked device that is used ONLY for development and testing**
# Astar  2.23.x

## System

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Fill block |    |   |   | `Perbill` ratio <br/> |
|Remark |    |   |   | `Vecu8` remark <br/> |
|Set heap pages |    |   |   | `u64` pages <br/> |
|Set code |    |   |   | `Vecu8` code <br/> |
|Set code without checks |    |   |   | `Vecu8` code <br/> |
|Set storage |    |   |   | `VecKeyValue` items <br/> |
|Kill storage |    |   |   | `VecKey` keys <br/> |
|Kill prefix |    |   |   | `Key` prefix <br/>`u32` subkeys <br/> |
|Remark with event |    |   |   | `Vecu8` remark <br/> |

## Utility

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Batch |    |   |   | `VecCall` calls <br/> |
|As derivative |    |   |   | `u16` index <br/>`Call` call <br/> |
|Batch all |    |   |   | `VecCall` calls <br/> |
|Dispatch as |    |   |   | `BoxPalletsOrigin` as_origin <br/>`Call` call <br/> |
|Force batch |    |   |   | `VecCall` calls <br/> |

## Identity

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Add registrar |    |   |   | `AccountId` account <br/> |
|Set identity |    |   |   | `BoxIdentityInfoMaxAdditionalFields` info <br/> |
|Set subs |    |   |   | `VecTupleAccountIdData` subs <br/> |
|Clear identity |    |   |   |  |
|Request judgement |    |   |   | `Compactu32` reg_index <br/>`Compactu128` max_fee <br/> |
|Cancel request |    |   |   | `RegistrarIndex` reg_index <br/> |
|Set fee |    |   |   | `Compactu32` index <br/>`Compactu128` fee <br/> |
|Set account id |    |   |   | `Compactu32` index <br/>`AccountId` new_ <br/> |
|Set fields |    |   |   | `Compactu32` index <br/>`IdentityFields` fields <br/> |
|Provide judgement |    |   |   | `Compactu32` reg_index <br/>`LookupasStaticLookupSource` target <br/>`JudgementBalanceOfT` judgement <br/> |
|Kill identity |    |   |   | `LookupasStaticLookupSource` target <br/> |
|Add sub |    |   |   | `LookupasStaticLookupSource` sub <br/>`Data` data <br/> |
|Rename sub |    |   |   | `LookupasStaticLookupSource` sub <br/>`Data` data <br/> |
|Remove sub |    |   |   | `LookupasStaticLookupSource` sub <br/> |
|Quit sub |    |   |   |  |

## Timestamp

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Set |    |   |   | `Compactu64` now <br/> |

## Multisig

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|As multi threshold 1 |    |   |   | `VecAccountId` other_signatories <br/>`Call` call <br/> |
|As multi |    |   |   | `u16` threshold <br/>`VecAccountId` other_signatories <br/>`OptionTimepoint` maybe_timepoint <br/>`OpaqueCall` call <br/>`bool` store_call <br/>`Weight` max_weight <br/> |
|Approve as multi |    |   |   | `u16` threshold <br/>`VecAccountId` other_signatories <br/>`OptionTimepoint` maybe_timepoint <br/>`H256` call_hash <br/>`Weight` max_weight <br/> |
|Cancel as multi |    |   |   | `u16` threshold <br/>`VecAccountId` other_signatories <br/>`Timepoint` timepoint <br/>`H256` call_hash <br/> |

## ParachainSystem

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Set validation data |    |   |   | `ParachainInherentData` data <br/> |
|Sudo send upward message |    |   |   | `UpwardMessage` message <br/> |
|Authorize upgrade |    |   |   | `Hash` code_hash <br/> |
|Enact authorized upgrade |    |   |   | `Vecu8` code <br/> |

## Balances

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Transfer | :heavy_check_mark:  | :heavy_check_mark: | :heavy_check_mark: | `LookupasStaticLookupSource` dest <br/>`CompactBalance` amount <br/> |
|Set balance |    | :heavy_check_mark: | :heavy_check_mark: | `LookupasStaticLookupSource` who <br/>`CompactBalance` new_free <br/>`CompactBalance` new_reserved <br/> |
|Force transfer | :heavy_check_mark:  | :heavy_check_mark: | :heavy_check_mark: | `LookupasStaticLookupSource` source <br/>`LookupasStaticLookupSource` dest <br/>`CompactBalance` amount <br/> |
|Transfer keep alive | :heavy_check_mark:  | :heavy_check_mark: | :heavy_check_mark: | `LookupasStaticLookupSource` dest <br/>`CompactBalance` amount <br/> |
|Transfer all | :heavy_check_mark:  | :heavy_check_mark: |   | `LookupasStaticLookupSource` dest <br/>`bool` keep_alive <br/> |
|Force unreserve |    | :heavy_check_mark: |   | `LookupasStaticLookupSource` who <br/>`Balance` amount <br/> |

## Vesting

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Vest |    |   |   |  |
|Vest other |    |   |   | `LookupasStaticLookupSource` target <br/> |
|Vested transfer |    |   |   | `LookupasStaticLookupSource` target <br/>`VestingInfo` schedule <br/> |
|Force vested transfer |    |   |   | `LookupasStaticLookupSource` source <br/>`LookupasStaticLookupSource` target <br/>`VestingInfo` schedule <br/> |
|Force update schedules |    |   |   | `LookupasStaticLookupSource` target <br/>`BoundedVecVestingInfoBalanceOfTBlockNumberMaxVestingSchedulesGetT` schedules <br/> |
|Merge schedules |    |   |   | `u32` schedule1_index <br/>`u32` schedule2_index <br/> |

## DappsStaking

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Register |    |   |   | `SmartContract` contract_id <br/> |
|Unregister |    |   |   | `SmartContract` contract_id <br/> |
|Withdraw from unregistered |    |   |   | `SmartContract` contract_id <br/> |
|Bond and stake |    |   |   | `SmartContract` contract_id <br/>`Compactu128` amount <br/> |
|Unbond and unstake |    |   |   | `SmartContract` contract_id <br/>`Compactu128` amount <br/> |
|Withdraw Unbonded |    |   |   |  |
|Nomination transfer |    |   |   | `SmartContract` origin_contract_id <br/>`Compactu128` amount <br/>`SmartContract` target_contract_id <br/> |
|Claim staker |    |   |   | `SmartContract` contract_id <br/> |
|Claim dapp |    |   |   | `SmartContract` contract_id <br/>`Compactu32` era <br/> |
|Force new era |    |   |   |  |
|Developer pre approval |    |   |   | `AccountId` developer <br/> |
|Enable developer pre approval |    |   |   | `bool` enabled <br/> |
|Maintenance mode |    |   |   | `bool` enable_maintenance <br/> |
|Set reward destination |    |   |   | `RewardDestination` reward_destination <br/> |
|Set contract stake info |    |   |   | `SmartContract` contract <br/>`EraIndex` era <br/>`ContractStakeInfoBalanceOfT` contract_stake_info <br/> |

## BlockReward

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Set configuration |    |   |   | `RewardDistributionConfig` reward_distro_params <br/> |

## Assets

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Create |    |   |   | `Compactu128` id <br/>`LookupasStaticLookupSource` admin <br/>`Balance` min_balance <br/> |
|Force create |    |   |   | `Compactu128` id <br/>`LookupasStaticLookupSource` owner <br/>`bool` is_sufficient <br/>`Compactu128` min_balance <br/> |
|Destroy |    |   |   | `Compactu128` id <br/>`DestroyWitness` witness <br/> |
|Mint |    |   |   | `Compactu128` id <br/>`LookupasStaticLookupSource` beneficiary <br/>`Compactu128` amount <br/> |
|Burn |    |   |   | `Compactu128` id <br/>`LookupasStaticLookupSource` who <br/>`Compactu128` amount <br/> |
|Transfer |    |   |   | `Compactu128` id <br/>`LookupasStaticLookupSource` target <br/>`Compactu128` amount <br/> |
|Transfer keep alive |    |   |   | `Compactu128` id <br/>`LookupasStaticLookupSource` target <br/>`Compactu128` amount <br/> |
|Force transfer |    |   |   | `Compactu128` id <br/>`LookupasStaticLookupSource` source <br/>`LookupasStaticLookupSource` dest <br/>`Compactu128` amount <br/> |
|Freeze |    |   |   | `Compactu128` id <br/>`LookupasStaticLookupSource` who <br/> |
|Thaw |    |   |   | `Compactu128` id <br/>`LookupasStaticLookupSource` who <br/> |
|Freeze asset |    |   |   | `Compactu128` id <br/> |
|Thaw asset |    |   |   | `Compactu128` id <br/> |
|Transfer ownership |    |   |   | `Compactu128` id <br/>`LookupasStaticLookupSource` owner <br/> |
|Set team |    |   |   | `Compactu128` id <br/>`LookupasStaticLookupSource` issuer <br/>`LookupasStaticLookupSource` admin <br/>`LookupasStaticLookupSource` freezer <br/> |
|Set metadata |    |   |   | `Compactu128` id <br/>`Vecu8` name <br/>`Vecu8` symbol <br/>`u8` decimals <br/> |
|Clear metadata |    |   |   | `Compactu128` id <br/> |
|Force set metadata |    |   |   | `Compactu128` id <br/>`Vecu8` name <br/>`Vecu8` symbol <br/>`u8` decimals <br/>`bool` is_frozen <br/> |
|Force clear metadata |    |   |   | `Compactu128` id <br/> |
|Force asset status |    |   |   | `Compactu128` id <br/>`LookupasStaticLookupSource` owner <br/>`LookupasStaticLookupSource` issuer <br/>`LookupasStaticLookupSource` admin <br/>`LookupasStaticLookupSource` freezer <br/>`Compactu128` min_balance <br/>`bool` is_sufficient <br/>`bool` is_frozen <br/> |
|Approve transfer |    |   |   | `Compactu128` id <br/>`LookupasStaticLookupSource` delegate <br/>`Compactu128` amount <br/> |
|Cancel approval |    |   |   | `Compactu128` id <br/>`LookupasStaticLookupSource` delegate <br/> |
|Force cancel approval |    |   |   | `Compactu128` id <br/>`LookupasStaticLookupSource` owner <br/>`LookupasStaticLookupSource` delegate <br/> |
|Transfer approved |    |   |   | `Compactu128` id <br/>`LookupasStaticLookupSource` owner <br/>`LookupasStaticLookupSource` destination <br/>`Compactu128` amount <br/> |
|Touch |    |   |   | `Compactu128` id <br/> |
|Refund |    |   |   | `Compactu128` id <br/>`bool` allow_burn <br/> |

## Authorship

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Set uncles |    |   |   | `VecHeader` new_uncles <br/> |

## CollatorSelection

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Set invulnerables |    |   |   | `VecAccountId` new_ <br/> |
|Set desired candidates |    |   |   | `u32` max <br/> |
|Set candidacy bond |    |   |   | `Balance` bond <br/> |
|Register as candidate |    |   |   |  |
|Leave intent |    |   |   |  |

## Session

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Set keys |    |   |   | `Keys` keys <br/>`Bytes` proof <br/> |
|Purge keys |    |   |   |  |

## XcmpQueue

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Service overweight |    |   |   | `OverweightIndex` index <br/>`Weight` weight_limit <br/> |
|Suspend xcm execution |    |   |   |  |
|Resume xcm execution |    |   |   |  |
|Update suspend threshold |    |   |   | `u32` new_ <br/> |
|Update drop threshold |    |   |   | `u32` new_ <br/> |
|Update resume threshold |    |   |   | `u32` new_ <br/> |
|Update threshold weight |    |   |   | `Weight` new_ <br/> |
|Update weight restrict decay |    |   |   | `Weight` new_ <br/> |
|Update xcmp max individual weight |    |   |   | `Weight` new_ <br/> |

## PolkadotXcm

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Send |    |   |   | `BoxVersionedMultiLocation` dest <br/>`BoxVersionedXcmTuple` message <br/> |
|Teleport assets |    |   |   | `BoxVersionedMultiLocation` dest <br/>`BoxVersionedMultiLocation` beneficiary <br/>`BoxVersionedMultiAssets` assets <br/>`u32` fee_asset_item <br/> |
|Reserve transfer assets |    |   |   | `BoxVersionedMultiLocation` dest <br/>`BoxVersionedMultiLocation` beneficiary <br/>`BoxVersionedMultiAssets` assets <br/>`u32` fee_asset_item <br/> |
|Reserve withdraw assets |    |   |   | `BoxVersionedMultiLocation` dest <br/>`BoxVersionedMultiLocation` beneficiary <br/>`BoxVersionedMultiAssets` assets <br/>`u32` fee_asset_item <br/> |
|Execute |    |   |   | `BoxVersionedXcmTasSysConfigCall` message <br/>`Weight` max_weight <br/> |
|Force xcm version |    |   |   | `BoxMultiLocation` location <br/>`XcmVersion` xcm_version <br/> |
|Force default xcm version |    |   |   | `OptionXcmVersion` maybe_xcm_version <br/> |
|Force subscribe version notify |    |   |   | `BoxVersionedMultiLocation` location <br/> |
|Force unsubscribe version notify |    |   |   | `BoxVersionedMultiLocation` location <br/> |
|Limited reserve transfer assets |    |   |   | `BoxVersionedMultiLocation` dest <br/>`BoxVersionedMultiLocation` beneficiary <br/>`BoxVersionedMultiAssets` assets <br/>`u32` fee_asset_item <br/>`WeightLimit` weight_limit <br/> |
|Limited teleport assets |    |   |   | `BoxVersionedMultiLocation` dest <br/>`BoxVersionedMultiLocation` beneficiary <br/>`BoxVersionedMultiAssets` assets <br/>`u32` fee_asset_item <br/>`WeightLimit` weight_limit <br/> |
|Limited reserve withdraw assets |    |   |   | `BoxVersionedMultiLocation` dest <br/>`BoxVersionedMultiLocation` beneficiary <br/>`BoxVersionedMultiAssets` assets <br/>`u32` fee_asset_item <br/>`WeightLimit` weight_limit <br/> |

## DmpQueue

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Service overweight |    |   |   | `OverweightIndex` index <br/>`Weight` weight_limit <br/> |

## XcAssetConfig

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Register asset location |    |   |   | `BoxVersionedMultiLocation` asset_location <br/>`Compactu128` asset_id <br/> |
|Set asset units per second |    |   |   | `BoxVersionedMultiLocation` asset_location <br/>`Compactu128` units_per_second <br/> |
|Change existing asset location |    |   |   | `BoxVersionedMultiLocation` new_asset_location <br/>`Compactu128` asset_id <br/> |
|Remove payment asset |    |   |   | `BoxVersionedMultiLocation` asset_location <br/> |
|Remove asset |    |   |   | `Compactu128` asset_id <br/> |

## EVM

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Withdraw |    |   |   | `H160` address <br/>`Balance` amount <br/> |
|Call |    |   |   | `H160` source <br/>`H160` target <br/>`Vecu8` input <br/>`U256` value <br/>`u64` gas_limit <br/>`U256` max_fee_per_gas <br/>`OptionU256` max_priority_fee_per_gas <br/>`OptionU256` nonce <br/>`VecTupleH160VecH256` access_list <br/> |
|Create |    |   |   | `H160` source <br/>`Vecu8` init <br/>`U256` value <br/>`u64` gas_limit <br/>`U256` max_fee_per_gas <br/>`OptionU256` max_priority_fee_per_gas <br/>`OptionU256` nonce <br/>`VecTupleH160VecH256` access_list <br/> |
|Create2 |    |   |   | `H160` source <br/>`Vecu8` init <br/>`H256` salt <br/>`U256` value <br/>`u64` gas_limit <br/>`U256` max_fee_per_gas <br/>`OptionU256` max_priority_fee_per_gas <br/>`OptionU256` nonce <br/>`VecTupleH160VecH256` access_list <br/> |

## Ethereum

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Transact |    |   |   | `Transaction` transaction <br/> |

## EthCall

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Call |    |   |   | `Call` call <br/>`AccountId` signer <br/>`Vecu8` signature <br/>`Compactu32` nonce <br/> |

## BaseFee

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Set base fee per gas |    |   |   | `U256` fee <br/> |
|Set is active |    |   |   | `bool` is_active <br/> |
|Set elasticity |    |   |   | `Permill` elasticity <br/> |

## Sudo

| Name        | Light | XL | Nesting | Arguments |
| :---------- |:------------:|:--------:|:--------:|:--------|
|Sudo |    |   |   | `Call` call <br/> |
|Sudo unchecked weight |    |   |   | `Call` call <br/>`Weight` weight <br/> |
|Set key |    |   |   | `LookupasStaticLookupSource` new_ <br/> |
|Sudo as |    |   |   | `LookupasStaticLookupSource` who <br/>`Call` call <br/> |

