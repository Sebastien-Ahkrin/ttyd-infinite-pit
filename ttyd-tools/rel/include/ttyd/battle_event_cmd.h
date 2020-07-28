#pragma once

#include "evtmgr.h"

#include <cstdint>

namespace ttyd::battle_event_cmd {

extern "C" {

// btlevtcmd_ftof
// btlevtcmd_ftomsec
// btlevtcmd_StageDispellFog
// btlevtcmd_StatusWindowOnOff
// btlevtcmd_BtlStageObjGetRotate
// btlevtcmd_BtlStageObjSetRotate
// btlevtcmd_BtlStageObjFlagOnOff
// btlevtcmd_SacBgsetMove
// btlevtcmd_InviteApInfoReport
// btlevtcmd_PadCheckNow
// btlevtcmd_PadCheckTrigger
// btlevtcmd_EnemyItemUseCheck
// btlevtcmd_snd_voice
// btlevtcmd_snd_se_offset
// btlevtcmd_snd_se
// _MoveSoundControlEndCore
// _PartsMoveSoundControlEnd
// _UnitMoveSoundControlEnd
// _MoveSoundControlCore
// _PartsMoveSoundControl
// _UnitMoveSoundControl
// btlevtcmd_SetPartsJumpSound
// btlevtcmd_SetJumpSound
// btlevtcmd_SetPartsDiveSound
// btlevtcmd_SetDiveSound
// btlevtcmd_SetPartsWalkSound
// btlevtcmd_SetWalkSound
// btlevtcmd_SetPartsRunSound
// btlevtcmd_SetRunSound
// btlevtcmd_SetMoveSoundDataWork
// btlevtcmd_TransStageFloorPosition
// btlevtcmd_GetStageAudienceAreaSize
// btlevtcmd_GetStageSize
// btlevtcmd_SortPhaseMoveTable
// btlevtcmd_InterruptStop
// btlevtcmd_GetGuardKouraId
// btlevtcmd_SetGuard
EVT_DECLARE_USER_FUNC(btlevtcmd_WeaponAftereffect, 1)
// btlevtcmd_GetItemRecoverParam
// btlevtcmd_CommandGetWeaponItemId
// btlevtcmd_CommandGetWeaponAddress
// btlevtcmd_CommandGetWeaponActionLv
// btlevtcmd_GetWeaponActionLv
// btlevtcmd_CommandPayWeaponCost
// btlevtcmd_PayWeaponCost
// btlevtcmd_CheckWeaponPluralTarget
// btlevtcmd_AfterReactionEntry
// btlevtcmd_OffUnitFlag
// btlevtcmd_OnUnitFlag
// btlevtcmd_CheckUnitFlag
// btlevtcmd_GetACPossibility
// btlevtcmd_CheckActStatus
// btlevtcmd_OffStatusFlag
// btlevtcmd_OnStatusFlag
// btlevtcmd_ClearAllStatus
// btlevtcmd_OnOffStatus
// btlevtcmd_CheckStatus
// btlevtcmd_CheckGuardMotionEnable
// btlevtcmd_AnimeFlagOnOff
// btlevtcmd_AnimeChangePaperAnime
// btlevtcmd_AnimeChangePaperGroup
// btlevtcmd_AnimeSetMotionSpeed
// btlevtcmd_CheckDefinePosetype
// btlevtcmd_AnimeSetPoseSoundTable
// btlevtcmd_AnimeSetPoseTable
// btlevtcmd_AnimeChangePoseFromTable
// btlevtcmd_AnimeCmpPoseType
// btlevtcmd_SetStayPoseType
// btlevtcmd_SetTalkPoseType
// btlevtcmd_SetStayPose
// btlevtcmd_SetTalkPose
// btlevtcmd_SetTalkBodyId
// btlevtcmd_AnimeWaitPlayLoopTiming
// btlevtcmd_AnimeWaitPlayComplete
// btlevtcmd_AnimeChangePoseDirect
// btlevtcmd_AnimeChangePoseType
// btlevtcmd_AnimeChangePose
// btlevtcmd_AnimeChangeGroup
// btlevtcmd_AudienceAppeal
// btlevtcmd_ACRGetResult
// btlevtcmd_ACRStart
// btlevtcmd_ACHelpSet
// btlevtcmd_ac_timing_get_success_frame
// btlevtcmd_ac_timing_flag_onoff
// btlevtcmd_ACSuccessEffect
// btlevtcmd_AudienceDeclareAcrobatResult
EVT_DECLARE_USER_FUNC(btlevtcmd_AudienceDeclareACResult, 2)
// btlevtcmd_GetResultCountAC
// btlevtcmd_GetResultACDefence
// btlevtcmd_GetResultPrizeLv
// btlevtcmd_GetResultAC
// btlevtcmd_ResultACDefence
// btlevtcmd_ResultAC
// btlevtcmd_StopAC
// btlevtcmd_StartAC
// btlevtcmd_SetupAC
// btlevtcmd_AcSetOutputParam
// btlevtcmd_AcGetOutputParam
// btlevtcmd_AcSetGaugeParam
// btlevtcmd_AcGetParam
// btlevtcmd_AcSetParam
// btlevtcmd_AcSetParamAll
// btlevtcmd_AcSetFlag
// btlevtcmd_AcGetDifficulty
// btlevtcmd_AcSetDifficulty
// btlevtcmd_DivePartsPosition
// btlevtcmd_FallPartsPosition
// btlevtcmd_JumpPartsContinue
// btlevtcmd_JumpPartsSetting
// btlevtcmd_JumpPartsPosition
// btlevtcmd_SetPartsFallAccel
// btlevtcmd_SetPartsMoveSpeed
// btlevtcmd_GetTakeoffPosition
// btlevtcmd_MarioJumpPosition
// btlevtcmd_MarioJumpParam
// btlevtcmd_GetConfuseActEvent
// btlevtcmd_PhaseEventStartDeclare
// btlevtcmd_GetDataFromDataTable
// btlevtcmd_CheckDataOfDataTable
// btlevtcmd_RunDataEventChild
// btlevtcmd_WaitAttackEndCheck
// btlevtcmd_WaitAttackEnd
// btlevtcmd_WaitGuardMove
// btlevtcmd_GuardMoveEnd
// btlevtcmd_StopWaitEvent
// btlevtcmd_StartWaitEvent
// btlevtcmd_SetEventCeilFall
// btlevtcmd_SetEventConfusion
// btlevtcmd_SetEventAttack
// btlevtcmd_SetEventUnisonPhase
// btlevtcmd_SetEventPhase
// btlevtcmd_SetEventEntry
// btlevtcmd_SetEventWait
// btlevtcmd_SetEventDamage
// btlevtcmd_DamageDirect
// btlevtcmd_CommandCheckDamage
// btlevtcmd_CheckDamage
// btlevtcmd_CommandPreCheckCounter
// btlevtcmd_PreCheckCounter
// btlevtcmd_CommandPreCheckDamage
// btlevtcmd_PreCheckDamage
// btlevtcmd_AttackDeclareAll
// btlevtcmd_AttackDeclare
// btlevtcmd_ConsumeItemReserve
EVT_DECLARE_USER_FUNC(btlevtcmd_ConsumeItem, 1)
// btlevtcmd_CommandFlyItem
// btlevtcmd_DispItemIcon
EVT_DECLARE_USER_FUNC(btlevtcmd_GetConsumeItem, 1)
// btlevtcmd_GetFirstAttackTarget
// btlevtcmd_GetSelectNextEnemy
// btlevtcmd_GetSelectEnemy
// btlevtcmd_ChoiceSamplingEnemy
// btlevtcmd_SamplingEnemy
// btlevtcmd_PartsFaceDirectionSub
// btlevtcmd_FaceDirectionSub
// btlevtcmd_FaceDirectionAdd
// btlevtcmd_MoveDirectionAdd
// btlevtcmd_EllipseMovePosition
// btlevtcmd_DivePosition
// btlevtcmd_GetMoveFrame
// btlevtcmd_MovePosition
// btlevtcmd_FallPosition
// btlevtcmd_JumpContinue
// btlevtcmd_JumpPosition
// btlevtcmd_JumpSetting
// btlevtcmd_SetFallAccel
// btlevtcmd_SetJumpSpeed
// btlevtcmd_SetMoveSpeed
// btlevtcmd_StoreCoin
// btlevtcmd_GetCoin
// btlevtcmd_StoreExp
// btlevtcmd_GetExp
// btlevtcmd_GetBackItem
// btlevtcmd_ChangeDataTable
// btlevtcmd_SetPartsDefenceAttrTable
// btlevtcmd_SetPartsDefenceTable
// btlevtcmd_ChangeKind
// btlevtcmd_CheckCommandUnit
// btlevtcmd_SetRegistStatus
// btlevtcmd_CheckToken
// btlevtcmd_OffToken
// btlevtcmd_OnToken
// btlevtcmd_SetPartsBlur
// btlevtcmd_OffPartsCounterAttribute
// btlevtcmd_OnPartsCounterAttribute
// btlevtcmd_CheckPartsCounterAttribute
// btlevtcmd_OffPartsAttribute
// btlevtcmd_OnPartsAttribute
// btlevtcmd_CheckPartsAttribute
// btlevtcmd_OffAttribute
// btlevtcmd_OnAttribute
// btlevtcmd_CheckAttribute
// btlevtcmd_ResetFaceDirection
// btlevtcmd_ChangePartsFaceDirection
// btlevtcmd_ChangeFaceDirection
// btlevtcmd_GetFaceDirection
// btlevtcmd_CalculateFaceDirection
// btlevtcmd_GetPartyTechLv
// btlevtcmd_GetUnitId
// btlevtcmd_GetBodyId
// btlevtcmd_GetPartyId
// btlevtcmd_GetMarioId
// btlevtcmd_GetPartnerId
// btlevtcmd_GetUnitKind
// btlevtcmd_GetProtectId
// btlevtcmd_GetFriendBelong
// btlevtcmd_GetEnemyBelong
// btlevtcmd_CheckSpace
// btlevtcmd_CheckDamagePattern
// btlevtcmd_RunHitEventDirect
// btlevtcmd_StartAvoid
// btlevtcmd_CheckDamageCode
// btlevtcmd_GetDamageCode
// btlevtcmd_GetTotalDamage
// btlevtcmd_GetDamage
// btlevtcmd_SetPartsWork
// btlevtcmd_GetPartsWork
// btlevtcmd_SetUnitWorkFloat
// btlevtcmd_GetUnitWorkFloat
// btlevtcmd_AddUnitWork
// btlevtcmd_SetUnitWork
// btlevtcmd_GetUnitWork
// btlevtcmd_SetOverTurnCount
// btlevtcmd_GetOverTurnCount
// btlevtcmd_RecoverFp
// btlevtcmd_RecoverHp
// btlevtcmd_GetHpDamageCount
// btlevtcmd_GetFpDamage
// btlevtcmd_GetHpDamage
// btlevtcmd_GetDamagePartsId
// btlevtcmd_SetMaxMoveCount
// btlevtcmd_SetSwallowAttribute
// btlevtcmd_SetSwallowParam
// btlevtcmd_SetMaxFp
// btlevtcmd_SetFp
// btlevtcmd_SetHp
// btlevtcmd_GetMaxFp
// btlevtcmd_GetMaxHp
// btlevtcmd_GetFp
// btlevtcmd_GetHp
// btlevtcmd_AddPartsScale
// btlevtcmd_SetPartsScale
// btlevtcmd_AddScale
// btlevtcmd_SetScale
// btlevtcmd_GetScale
// btlevtcmd_SetPartsBaseScale
// btlevtcmd_SetBaseScale
// btlevtcmd_SetPossessionItemOffset
// btlevtcmd_SetCutHeight
// btlevtcmd_SetCutWidth
// btlevtcmd_SetKissHitOffset
// btlevtcmd_SetBintaHitOffset
// btlevtcmd_SetCutBaseOffset
// btlevtcmd_SetRotateOffsetFromCenterOffset
// btlevtcmd_AddPartsRotateOffset
// btlevtcmd_SetPartsRotateOffset
// btlevtcmd_SetRotateOffset
// btlevtcmd_SetPartsBaseRotate
// btlevtcmd_SetBaseRotate
// btlevtcmd_AddPartsRotate
// btlevtcmd_SetPartsRotate
// btlevtcmd_GetPartsRotate
// btlevtcmd_AddRotate
// btlevtcmd_SetRotate
// btlevtcmd_GetRotate
// btlevtcmd_SetRGB
// btlevtcmd_GetRGB
// btlevtcmd_SetAlpha
// btlevtcmd_GetHpGaugeOffset
// btlevtcmd_SetHpGaugeOffset
// btlevtcmd_SetStatusIconOffset
// btlevtcmd_GetStatusMg
// btlevtcmd_SetHeight
// btlevtcmd_GetHeight
// btlevtcmd_GetWidth
// btlevtcmd_SetHitCursorOffset
// btlevtcmd_SetHitOffset
// btlevtcmd_GetHitPos
// btlevtcmd_SetPartsHomePos
// btlevtcmd_AddHomePos
// btlevtcmd_SetHomePos
// btlevtcmd_GetHomePos
// btlevtcmd_SetTogeOffset
// btlevtcmd_AddPartsDispOffset
// btlevtcmd_SetPartsDispOffset
// btlevtcmd_SetDispOffset
// btlevtcmd_AddPartsPos
// btlevtcmd_SetPartsPos
// btlevtcmd_GetPartsPos
// btlevtcmd_AddPos
// btlevtcmd_SetPos
// btlevtcmd_ChangeParty
// btlevtcmd_ReplaceParts
EVT_DECLARE_USER_FUNC(btlevtcmd_KillUnit, 2)
// btlevtcmd_SpawnUnit
// btlevtcmd_DrawLots
// btlevtcmd_GetRandomValue
// btlevtcmd_GetPosFloat
// btlevtcmd_GetPos
// btlevtcmd_CheckPhase
// btlevtcmd_reset_move_color_lv_all
// btlevtcmd_reset_turn
// btlevtcmd_get_turn
// btlevtcmd_onoff_battleflag
// btlevtcmd_check_battleflag
// btlevtcmd_WaitEventEnd

}

}