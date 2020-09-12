
"use strict";

let SetMavFrame = require('./SetMavFrame.js')
let FileList = require('./FileList.js')
let FileRemove = require('./FileRemove.js')
let CommandTriggerControl = require('./CommandTriggerControl.js')
let WaypointPush = require('./WaypointPush.js')
let ParamPush = require('./ParamPush.js')
let CommandVtolTransition = require('./CommandVtolTransition.js')
let LogRequestList = require('./LogRequestList.js')
let FileWrite = require('./FileWrite.js')
let CommandHome = require('./CommandHome.js')
let FileMakeDir = require('./FileMakeDir.js')
let FileTruncate = require('./FileTruncate.js')
let CommandTOL = require('./CommandTOL.js')
let FileRead = require('./FileRead.js')
let VehicleInfoGet = require('./VehicleInfoGet.js')
let WaypointSetCurrent = require('./WaypointSetCurrent.js')
let FileRemoveDir = require('./FileRemoveDir.js')
let MessageInterval = require('./MessageInterval.js')
let StreamRate = require('./StreamRate.js')
let FileRename = require('./FileRename.js')
let ParamGet = require('./ParamGet.js')
let CommandTriggerInterval = require('./CommandTriggerInterval.js')
let FileOpen = require('./FileOpen.js')
let ParamPull = require('./ParamPull.js')
let WaypointPull = require('./WaypointPull.js')
let WaypointClear = require('./WaypointClear.js')
let SetMode = require('./SetMode.js')
let CommandLong = require('./CommandLong.js')
let CommandInt = require('./CommandInt.js')
let LogRequestEnd = require('./LogRequestEnd.js')
let ParamSet = require('./ParamSet.js')
let LogRequestData = require('./LogRequestData.js')
let CommandBool = require('./CommandBool.js')
let FileClose = require('./FileClose.js')
let MountConfigure = require('./MountConfigure.js')
let FileChecksum = require('./FileChecksum.js')

module.exports = {
  SetMavFrame: SetMavFrame,
  FileList: FileList,
  FileRemove: FileRemove,
  CommandTriggerControl: CommandTriggerControl,
  WaypointPush: WaypointPush,
  ParamPush: ParamPush,
  CommandVtolTransition: CommandVtolTransition,
  LogRequestList: LogRequestList,
  FileWrite: FileWrite,
  CommandHome: CommandHome,
  FileMakeDir: FileMakeDir,
  FileTruncate: FileTruncate,
  CommandTOL: CommandTOL,
  FileRead: FileRead,
  VehicleInfoGet: VehicleInfoGet,
  WaypointSetCurrent: WaypointSetCurrent,
  FileRemoveDir: FileRemoveDir,
  MessageInterval: MessageInterval,
  StreamRate: StreamRate,
  FileRename: FileRename,
  ParamGet: ParamGet,
  CommandTriggerInterval: CommandTriggerInterval,
  FileOpen: FileOpen,
  ParamPull: ParamPull,
  WaypointPull: WaypointPull,
  WaypointClear: WaypointClear,
  SetMode: SetMode,
  CommandLong: CommandLong,
  CommandInt: CommandInt,
  LogRequestEnd: LogRequestEnd,
  ParamSet: ParamSet,
  LogRequestData: LogRequestData,
  CommandBool: CommandBool,
  FileClose: FileClose,
  MountConfigure: MountConfigure,
  FileChecksum: FileChecksum,
};
