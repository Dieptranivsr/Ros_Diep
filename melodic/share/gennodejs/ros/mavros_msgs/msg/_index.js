
"use strict";

let Trajectory = require('./Trajectory.js');
let EstimatorStatus = require('./EstimatorStatus.js');
let LogData = require('./LogData.js');
let PositionTarget = require('./PositionTarget.js');
let CommandCode = require('./CommandCode.js');
let ManualControl = require('./ManualControl.js');
let FileEntry = require('./FileEntry.js');
let CamIMUStamp = require('./CamIMUStamp.js');
let Thrust = require('./Thrust.js');
let OverrideRCIn = require('./OverrideRCIn.js');
let RCIn = require('./RCIn.js');
let WaypointList = require('./WaypointList.js');
let ExtendedState = require('./ExtendedState.js');
let Param = require('./Param.js');
let HilSensor = require('./HilSensor.js');
let GlobalPositionTarget = require('./GlobalPositionTarget.js');
let CompanionProcessStatus = require('./CompanionProcessStatus.js');
let ADSBVehicle = require('./ADSBVehicle.js');
let AttitudeTarget = require('./AttitudeTarget.js');
let OpticalFlowRad = require('./OpticalFlowRad.js');
let Vibration = require('./Vibration.js');
let ESCStatus = require('./ESCStatus.js');
let MountControl = require('./MountControl.js');
let ParamValue = require('./ParamValue.js');
let HomePosition = require('./HomePosition.js');
let ESCInfo = require('./ESCInfo.js');
let LandingTarget = require('./LandingTarget.js');
let Altitude = require('./Altitude.js');
let HilControls = require('./HilControls.js');
let GPSRAW = require('./GPSRAW.js');
let VFR_HUD = require('./VFR_HUD.js');
let LogEntry = require('./LogEntry.js');
let ESCStatusItem = require('./ESCStatusItem.js');
let VehicleInfo = require('./VehicleInfo.js');
let WaypointReached = require('./WaypointReached.js');
let BatteryStatus = require('./BatteryStatus.js');
let RTCM = require('./RTCM.js');
let ESCInfoItem = require('./ESCInfoItem.js');
let RadioStatus = require('./RadioStatus.js');
let DebugValue = require('./DebugValue.js');
let TimesyncStatus = require('./TimesyncStatus.js');
let HilActuatorControls = require('./HilActuatorControls.js');
let WheelOdomStamped = require('./WheelOdomStamped.js');
let RTKBaseline = require('./RTKBaseline.js');
let ActuatorControl = require('./ActuatorControl.js');
let Mavlink = require('./Mavlink.js');
let Waypoint = require('./Waypoint.js');
let State = require('./State.js');
let HilStateQuaternion = require('./HilStateQuaternion.js');
let RCOut = require('./RCOut.js');
let OnboardComputerStatus = require('./OnboardComputerStatus.js');
let StatusText = require('./StatusText.js');
let HilGPS = require('./HilGPS.js');
let GPSRTK = require('./GPSRTK.js');

module.exports = {
  Trajectory: Trajectory,
  EstimatorStatus: EstimatorStatus,
  LogData: LogData,
  PositionTarget: PositionTarget,
  CommandCode: CommandCode,
  ManualControl: ManualControl,
  FileEntry: FileEntry,
  CamIMUStamp: CamIMUStamp,
  Thrust: Thrust,
  OverrideRCIn: OverrideRCIn,
  RCIn: RCIn,
  WaypointList: WaypointList,
  ExtendedState: ExtendedState,
  Param: Param,
  HilSensor: HilSensor,
  GlobalPositionTarget: GlobalPositionTarget,
  CompanionProcessStatus: CompanionProcessStatus,
  ADSBVehicle: ADSBVehicle,
  AttitudeTarget: AttitudeTarget,
  OpticalFlowRad: OpticalFlowRad,
  Vibration: Vibration,
  ESCStatus: ESCStatus,
  MountControl: MountControl,
  ParamValue: ParamValue,
  HomePosition: HomePosition,
  ESCInfo: ESCInfo,
  LandingTarget: LandingTarget,
  Altitude: Altitude,
  HilControls: HilControls,
  GPSRAW: GPSRAW,
  VFR_HUD: VFR_HUD,
  LogEntry: LogEntry,
  ESCStatusItem: ESCStatusItem,
  VehicleInfo: VehicleInfo,
  WaypointReached: WaypointReached,
  BatteryStatus: BatteryStatus,
  RTCM: RTCM,
  ESCInfoItem: ESCInfoItem,
  RadioStatus: RadioStatus,
  DebugValue: DebugValue,
  TimesyncStatus: TimesyncStatus,
  HilActuatorControls: HilActuatorControls,
  WheelOdomStamped: WheelOdomStamped,
  RTKBaseline: RTKBaseline,
  ActuatorControl: ActuatorControl,
  Mavlink: Mavlink,
  Waypoint: Waypoint,
  State: State,
  HilStateQuaternion: HilStateQuaternion,
  RCOut: RCOut,
  OnboardComputerStatus: OnboardComputerStatus,
  StatusText: StatusText,
  HilGPS: HilGPS,
  GPSRTK: GPSRTK,
};
