// Generated by gencpp from file mavros_msgs/CommandCode.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_COMMANDCODE_H
#define MAVROS_MSGS_MESSAGE_COMMANDCODE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mavros_msgs
{
template <class ContainerAllocator>
struct CommandCode_
{
  typedef CommandCode_<ContainerAllocator> Type;

  CommandCode_()
    {
    }
  CommandCode_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }




    enum { AIRFRAME_CONFIGURATION = 2520u };
     enum { ARM_AUTHORIZATION_REQUEST = 3001u };
     enum { COMPONENT_ARM_DISARM = 400u };
     enum { CONDITION_DELAY = 112u };
     enum { CONDITION_CHANGE_ALT = 113u };
     enum { CONDITION_DISTANCE = 114u };
     enum { CONDITION_YAW = 115u };
     enum { CONDITION_LAST = 159u };
     enum { CONDITION_GATE = 4501u };
     enum { CONTROL_HIGH_LATENCY = 2600u };
     enum { DO_FOLLOW = 32u };
     enum { DO_FOLLOW_REPOSITION = 33u };
     enum { DO_SET_MODE = 176u };
     enum { DO_JUMP = 177u };
     enum { DO_CHANGE_SPEED = 178u };
     enum { DO_SET_HOME = 179u };
     enum { DO_SET_PARAMETER = 180u };
     enum { DO_SET_RELAY = 181u };
     enum { DO_REPEAT_RELAY = 182u };
     enum { DO_SET_SERVO = 183u };
     enum { DO_REPEAT_SERVO = 184u };
     enum { DO_FLIGHTTERMINATION = 185u };
     enum { DO_CHANGE_ALTITUDE = 186u };
     enum { DO_LAND_START = 189u };
     enum { DO_RALLY_LAND = 190u };
     enum { DO_GO_AROUND = 191u };
     enum { DO_REPOSITION = 192u };
     enum { DO_PAUSE_CONTINUE = 193u };
     enum { DO_SET_REVERSE = 194u };
     enum { DO_SET_ROI_LOCATION = 195u };
     enum { DO_SET_ROI_WPNEXT_OFFSET = 196u };
     enum { DO_SET_ROI_NONE = 197u };
     enum { DO_CONTROL_VIDEO = 200u };
     enum { DO_MOUNT_CONFIGURE = 204u };
     enum { DO_MOUNT_CONTROL = 205u };
     enum { DO_SET_CAM_TRIGG_DIST = 206u };
     enum { DO_FENCE_ENABLE = 207u };
     enum { DO_PARACHUTE = 208u };
     enum { DO_MOTOR_TEST = 209u };
     enum { DO_INVERTED_FLIGHT = 210u };
     enum { DO_SET_CAM_TRIGG_INTERVAL = 214u };
     enum { DO_MOUNT_CONTROL_QUAT = 220u };
     enum { DO_GUIDED_MASTER = 221u };
     enum { DO_GUIDED_LIMITS = 222u };
     enum { DO_ENGINE_CONTROL = 223u };
     enum { DO_LAST = 240u };
     enum { DO_TRIGGER_CONTROL = 2003u };
     enum { DO_VTOL_TRANSITION = 3000u };
     enum { GET_HOME_POSITION = 410u };
     enum { GET_MESSAGE_INTERVAL = 510u };
     enum { IMAGE_START_CAPTURE = 2000u };
     enum { IMAGE_STOP_CAPTURE = 2001u };
     enum { LOGGING_START = 2510u };
     enum { LOGGING_STOP = 2511u };
     enum { MISSION_START = 300u };
     enum { NAV_WAYPOINT = 16u };
     enum { NAV_LOITER_UNLIM = 17u };
     enum { NAV_LOITER_TURNS = 18u };
     enum { NAV_LOITER_TIME = 19u };
     enum { NAV_RETURN_TO_LAUNCH = 20u };
     enum { NAV_LAND = 21u };
     enum { NAV_TAKEOFF = 22u };
     enum { NAV_LAND_LOCAL = 23u };
     enum { NAV_TAKEOFF_LOCAL = 24u };
     enum { NAV_FOLLOW = 25u };
     enum { NAV_CONTINUE_AND_CHANGE_ALT = 30u };
     enum { NAV_LOITER_TO_ALT = 31u };
     enum { NAV_PATHPLANNING = 81u };
     enum { NAV_SPLINE_WAYPOINT = 82u };
     enum { NAV_VTOL_TAKEOFF = 84u };
     enum { NAV_VTOL_LAND = 85u };
     enum { NAV_GUIDED_ENABLE = 92u };
     enum { NAV_DELAY = 93u };
     enum { NAV_PAYLOAD_PLACE = 94u };
     enum { NAV_LAST = 95u };
     enum { NAV_SET_YAW_SPEED = 213u };
     enum { NAV_FENCE_RETURN_POINT = 5000u };
     enum { NAV_FENCE_POLYGON_VERTEX_INCLUSION = 5001u };
     enum { NAV_FENCE_POLYGON_VERTEX_EXCLUSION = 5002u };
     enum { NAV_FENCE_CIRCLE_INCLUSION = 5003u };
     enum { NAV_FENCE_CIRCLE_EXCLUSION = 5004u };
     enum { NAV_RALLY_POINT = 5100u };
     enum { OVERRIDE_GOTO = 252u };
     enum { PANORAMA_CREATE = 2800u };
     enum { PAYLOAD_PREPARE_DEPLOY = 30001u };
     enum { PAYLOAD_CONTROL_DEPLOY = 30002u };
     enum { PREFLIGHT_CALIBRATION = 241u };
     enum { PREFLIGHT_SET_SENSOR_OFFSETS = 242u };
     enum { PREFLIGHT_UAVCAN = 243u };
     enum { PREFLIGHT_STORAGE = 245u };
     enum { PREFLIGHT_REBOOT_SHUTDOWN = 246u };
     enum { REQUEST_PROTOCOL_VERSION = 519u };
     enum { REQUEST_AUTOPILOT_CAPABILITIES = 520u };
     enum { REQUEST_CAMERA_INFORMATION = 521u };
     enum { REQUEST_CAMERA_SETTINGS = 522u };
     enum { REQUEST_STORAGE_INFORMATION = 525u };
     enum { REQUEST_CAMERA_CAPTURE_STATUS = 527u };
     enum { REQUEST_FLIGHT_INFORMATION = 528u };
     enum { REQUEST_CAMERA_IMAGE_CAPTURE = 2002u };
     enum { REQUEST_VIDEO_STREAM_INFORMATION = 2504u };
     enum { RESET_CAMERA_SETTINGS = 529u };
     enum { SET_MESSAGE_INTERVAL = 511u };
     enum { SET_CAMERA_MODE = 530u };
     enum { SET_GUIDED_SUBMODE_STANDARD = 4000u };
     enum { SET_GUIDED_SUBMODE_CIRCLE = 4001u };
     enum { START_RX_PAIR = 500u };
     enum { STORAGE_FORMAT = 526u };
     enum { UAVCAN_GET_NODE_INFO = 5200u };
     enum { VIDEO_START_CAPTURE = 2500u };
     enum { VIDEO_STOP_CAPTURE = 2501u };
     enum { VIDEO_START_STREAMING = 2502u };
     enum { VIDEO_STOP_STREAMING = 2503u };
 

  typedef boost::shared_ptr< ::mavros_msgs::CommandCode_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::CommandCode_<ContainerAllocator> const> ConstPtr;

}; // struct CommandCode_

typedef ::mavros_msgs::CommandCode_<std::allocator<void> > CommandCode;

typedef boost::shared_ptr< ::mavros_msgs::CommandCode > CommandCodePtr;
typedef boost::shared_ptr< ::mavros_msgs::CommandCode const> CommandCodeConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::CommandCode_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::CommandCode_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geographic_msgs': ['/opt/ros/kinetic/share/geographic_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'mavros_msgs': ['/home/joaquin/catkin_ws/src/mavros/mavros_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'uuid_msgs': ['/opt/ros/kinetic/share/uuid_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::CommandCode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::CommandCode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::CommandCode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::CommandCode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::CommandCode_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::CommandCode_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::CommandCode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "03a2b9eca2a527279a43b976fb73a9f3";
  }

  static const char* value(const ::mavros_msgs::CommandCode_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x03a2b9eca2a52727ULL;
  static const uint64_t static_value2 = 0x9a43b976fb73a9f3ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::CommandCode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/CommandCode";
  }

  static const char* value(const ::mavros_msgs::CommandCode_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::CommandCode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# MAV_CMD command codes.\n\
# Actual meaning and params you may find in MAVLink documentation\n\
# https://mavlink.io/en/messages/common.html#MAV_CMD\n\
\n\
# [[[cog:\n\
# from pymavlink.dialects.v20 import common\n\
# from collections import OrderedDict\n\
# import re\n\
#\n\
# def wr_enum(enum, ename, pfx='', bsz=16):\n\
#     cog.outl(\"# \" + ename + \"_\" + pfx)\n\
#     for k, e in enum:\n\
#         # exclude also deprecated commands\n\
#         if 'MAV_CMD' + \"_\" + pfx in e.name and not re.search('deprecated', e.description, re.IGNORECASE):\n\
#             sn = e.name[len('MAV_CMD') + 1:]\n\
#             l = \"uint{bsz} {sn} = {k}\".format(**locals())\n\
#             if e.description:\n\
#                 l += ' ' * (50 - len(l)) + ' # ' + e.description\n\
#             cog.outl(l)\n\
#     cog.out('\\n')\n\
#\n\
# def decl_enum(ename):\n\
#     enum = sorted(common.enums[ename].items())\n\
#     enum.pop() # remove ENUM_END\n\
#\n\
#     enumt = []\n\
#     # exception list of commands to not include\n\
#     exlist = ['SPATIAL', 'USER', 'WAYPOINT']\n\
#     for k, e in enum:\n\
#         enumt.extend(e.name[len(ename) + 1:].split('_')[0:1])\n\
#\n\
#     enumt = sorted(set(enumt))\n\
#     enumt = [word for word in enumt if word not in exlist]\n\
#\n\
#     for key in enumt:\n\
#         wr_enum(enum, ename, key)\n\
#\n\
# decl_enum('MAV_CMD')\n\
# ]]]\n\
# MAV_CMD_AIRFRAME\n\
uint16 AIRFRAME_CONFIGURATION = 2520\n\
\n\
# MAV_CMD_ARM\n\
uint16 ARM_AUTHORIZATION_REQUEST = 3001            # Request authorization to arm the vehicle to a external entity, the arm authorizer is resposible to request all data that is needs from the vehicle before authorize or deny the request. If approved the progress of command_ack message should be set with period of time that this authorization is valid in seconds or in case it was denied it should be set with one of the reasons in ARM_AUTH_DENIED_REASON.\n\
\n\
\n\
# MAV_CMD_COMPONENT\n\
uint16 COMPONENT_ARM_DISARM = 400                  # Arms / Disarms a component\n\
\n\
# MAV_CMD_CONDITION\n\
uint16 CONDITION_DELAY = 112                       # Delay mission state machine.\n\
uint16 CONDITION_CHANGE_ALT = 113                  # Ascend/descend at rate.  Delay mission state machine until desired altitude reached.\n\
uint16 CONDITION_DISTANCE = 114                    # Delay mission state machine until within desired distance of next NAV point.\n\
uint16 CONDITION_YAW = 115                         # Reach a certain target angle.\n\
uint16 CONDITION_LAST = 159                        # NOP - This command is only used to mark the upper limit of the CONDITION commands in the enumeration\n\
uint16 CONDITION_GATE = 4501                       # WIP: Delay mission state machine until gate has been reached.\n\
\n\
# MAV_CMD_CONTROL\n\
uint16 CONTROL_HIGH_LATENCY = 2600                 # Request to start/stop transmitting over the high latency telemetry\n\
\n\
# MAV_CMD_DO\n\
uint16 DO_FOLLOW = 32                              # Being following a target\n\
uint16 DO_FOLLOW_REPOSITION = 33                   # Reposition the MAV after a follow target command has been sent\n\
uint16 DO_SET_MODE = 176                           # Set system mode.\n\
uint16 DO_JUMP = 177                               # Jump to the desired command in the mission list.  Repeat this action only the specified number of times\n\
uint16 DO_CHANGE_SPEED = 178                       # Change speed and/or throttle set points.\n\
uint16 DO_SET_HOME = 179                           # Changes the home location either to the current location or a specified location.\n\
uint16 DO_SET_PARAMETER = 180                      # Set a system parameter.  Caution!  Use of this command requires knowledge of the numeric enumeration value of the parameter.\n\
uint16 DO_SET_RELAY = 181                          # Set a relay to a condition.\n\
uint16 DO_REPEAT_RELAY = 182                       # Cycle a relay on and off for a desired number of cyles with a desired period.\n\
uint16 DO_SET_SERVO = 183                          # Set a servo to a desired PWM value.\n\
uint16 DO_REPEAT_SERVO = 184                       # Cycle a between its nominal setting and a desired PWM for a desired number of cycles with a desired period.\n\
uint16 DO_FLIGHTTERMINATION = 185                  # Terminate flight immediately\n\
uint16 DO_CHANGE_ALTITUDE = 186                    # Change altitude set point.\n\
uint16 DO_LAND_START = 189                         # Mission command to perform a landing. This is used as a marker in a mission to tell the autopilot where a sequence of mission items that represents a landing starts. It may also be sent via a COMMAND_LONG to trigger a landing, in which case the nearest (geographically) landing sequence in the mission will be used. The Latitude/Longitude is optional, and may be set to 0 if not needed. If specified then it will be used to help find the closest landing sequence.\n\
uint16 DO_RALLY_LAND = 190                         # Mission command to perform a landing from a rally point.\n\
uint16 DO_GO_AROUND = 191                          # Mission command to safely abort an autonmous landing.\n\
uint16 DO_REPOSITION = 192                         # Reposition the vehicle to a specific WGS84 global position.\n\
uint16 DO_PAUSE_CONTINUE = 193                     # If in a GPS controlled position mode, hold the current position or continue.\n\
uint16 DO_SET_REVERSE = 194                        # Set moving direction to forward or reverse.\n\
uint16 DO_SET_ROI_LOCATION = 195                   # Sets the region of interest (ROI) to a location. This can then be used by the vehicles control system to control the vehicle attitude and the attitude of various sensors such as cameras.\n\
uint16 DO_SET_ROI_WPNEXT_OFFSET = 196              # Sets the region of interest (ROI) to be toward next waypoint, with optional pitch/roll/yaw offset. This can then be used by the vehicles control system to control the vehicle attitude and the attitude of various sensors such as cameras.\n\
uint16 DO_SET_ROI_NONE = 197                       # Cancels any previous ROI command returning the vehicle/sensors to default flight characteristics. This can then be used by the vehicles control system to control the vehicle attitude and the attitude of various sensors such as cameras.\n\
uint16 DO_CONTROL_VIDEO = 200                      # Control onboard camera system.\n\
uint16 DO_MOUNT_CONFIGURE = 204                    # Mission command to configure a camera or antenna mount\n\
uint16 DO_MOUNT_CONTROL = 205                      # Mission command to control a camera or antenna mount\n\
uint16 DO_SET_CAM_TRIGG_DIST = 206                 # Mission command to set camera trigger distance for this flight. The camera is trigerred each time this distance is exceeded. This command can also be used to set the shutter integration time for the camera.\n\
uint16 DO_FENCE_ENABLE = 207                       # Mission command to enable the geofence\n\
uint16 DO_PARACHUTE = 208                          # Mission command to trigger a parachute\n\
uint16 DO_MOTOR_TEST = 209                         # Mission command to perform motor test\n\
uint16 DO_INVERTED_FLIGHT = 210                    # Change to/from inverted flight\n\
uint16 DO_SET_CAM_TRIGG_INTERVAL = 214             # Mission command to set camera trigger interval for this flight. If triggering is enabled, the camera is triggered each time this interval expires. This command can also be used to set the shutter integration time for the camera.\n\
uint16 DO_MOUNT_CONTROL_QUAT = 220                 # Mission command to control a camera or antenna mount, using a quaternion as reference.\n\
uint16 DO_GUIDED_MASTER = 221                      # set id of master controller\n\
uint16 DO_GUIDED_LIMITS = 222                      # set limits for external control\n\
uint16 DO_ENGINE_CONTROL = 223                     # Control vehicle engine. This is interpreted by the vehicles engine controller to change the target engine state. It is intended for vehicles with internal combustion engines\n\
uint16 DO_LAST = 240                               # NOP - This command is only used to mark the upper limit of the DO commands in the enumeration\n\
uint16 DO_TRIGGER_CONTROL = 2003                   # Enable or disable on-board camera triggering system.\n\
uint16 DO_VTOL_TRANSITION = 3000                   # Request VTOL transition\n\
\n\
# MAV_CMD_GET\n\
uint16 GET_HOME_POSITION = 410                     # Request the home position from the vehicle.\n\
uint16 GET_MESSAGE_INTERVAL = 510                  # Request the interval between messages for a particular MAVLink message ID\n\
\n\
# MAV_CMD_IMAGE\n\
uint16 IMAGE_START_CAPTURE = 2000                  # Start image capture sequence. Sends CAMERA_IMAGE_CAPTURED after each capture. Use NAN for reserved values.\n\
uint16 IMAGE_STOP_CAPTURE = 2001                   # Stop image capture sequence Use NAN for reserved values.\n\
\n\
# MAV_CMD_LOGGING\n\
uint16 LOGGING_START = 2510                        # Request to start streaming logging data over MAVLink (see also LOGGING_DATA message)\n\
uint16 LOGGING_STOP = 2511                         # Request to stop streaming log data over MAVLink\n\
\n\
# MAV_CMD_MISSION\n\
uint16 MISSION_START = 300                         # start running a mission\n\
\n\
# MAV_CMD_NAV\n\
uint16 NAV_WAYPOINT = 16                           # Navigate to waypoint.\n\
uint16 NAV_LOITER_UNLIM = 17                       # Loiter around this waypoint an unlimited amount of time\n\
uint16 NAV_LOITER_TURNS = 18                       # Loiter around this waypoint for X turns\n\
uint16 NAV_LOITER_TIME = 19                        # Loiter around this waypoint for X seconds\n\
uint16 NAV_RETURN_TO_LAUNCH = 20                   # Return to launch location\n\
uint16 NAV_LAND = 21                               # Land at location\n\
uint16 NAV_TAKEOFF = 22                            # Takeoff from ground / hand\n\
uint16 NAV_LAND_LOCAL = 23                         # Land at local position (local frame only)\n\
uint16 NAV_TAKEOFF_LOCAL = 24                      # Takeoff from local position (local frame only)\n\
uint16 NAV_FOLLOW = 25                             # Vehicle following, i.e. this waypoint represents the position of a moving vehicle\n\
uint16 NAV_CONTINUE_AND_CHANGE_ALT = 30            # Continue on the current course and climb/descend to specified altitude.  When the altitude is reached continue to the next command (i.e., don't proceed to the next command until the desired altitude is reached.\n\
uint16 NAV_LOITER_TO_ALT = 31                      # Begin loiter at the specified Latitude and Longitude.  If Lat=Lon=0, then loiter at the current position.  Don't consider the navigation command complete (don't leave loiter) until the altitude has been reached.  Additionally, if the Heading Required parameter is non-zero the  aircraft will not leave the loiter until heading toward the next waypoint.\n\
uint16 NAV_PATHPLANNING = 81                       # Control autonomous path planning on the MAV.\n\
uint16 NAV_SPLINE_WAYPOINT = 82                    # Navigate to waypoint using a spline path.\n\
uint16 NAV_VTOL_TAKEOFF = 84                       # Takeoff from ground using VTOL mode\n\
uint16 NAV_VTOL_LAND = 85                          # Land using VTOL mode\n\
uint16 NAV_GUIDED_ENABLE = 92                      # hand control over to an external controller\n\
uint16 NAV_DELAY = 93                              # Delay the next navigation command a number of seconds or until a specified time\n\
uint16 NAV_PAYLOAD_PLACE = 94                      # Descend and place payload.  Vehicle descends until it detects a hanging payload has reached the ground, the gripper is opened to release the payload\n\
uint16 NAV_LAST = 95                               # NOP - This command is only used to mark the upper limit of the NAV/ACTION commands in the enumeration\n\
uint16 NAV_SET_YAW_SPEED = 213                     # Sets a desired vehicle turn angle and speed change\n\
uint16 NAV_FENCE_RETURN_POINT = 5000               # Fence return point. There can only be one fence return point.\n\
\n\
uint16 NAV_FENCE_POLYGON_VERTEX_INCLUSION = 5001   # Fence vertex for an inclusion polygon (the polygon must not be self-intersecting). The vehicle must stay within this area. Minimum of 3 vertices required.\n\
\n\
uint16 NAV_FENCE_POLYGON_VERTEX_EXCLUSION = 5002   # Fence vertex for an exclusion polygon (the polygon must not be self-intersecting). The vehicle must stay outside this area. Minimum of 3 vertices required.\n\
\n\
uint16 NAV_FENCE_CIRCLE_INCLUSION = 5003           # Circular fence area. The vehicle must stay inside this area.\n\
\n\
uint16 NAV_FENCE_CIRCLE_EXCLUSION = 5004           # Circular fence area. The vehicle must stay outside this area.\n\
\n\
uint16 NAV_RALLY_POINT = 5100                      # Rally point. You can have multiple rally points defined.\n\
\n\
\n\
# MAV_CMD_OVERRIDE\n\
uint16 OVERRIDE_GOTO = 252                         # Hold / continue the current action\n\
\n\
# MAV_CMD_PANORAMA\n\
uint16 PANORAMA_CREATE = 2800                      # Create a panorama at the current position\n\
\n\
# MAV_CMD_PAYLOAD\n\
uint16 PAYLOAD_PREPARE_DEPLOY = 30001              # Deploy payload on a Lat / Lon / Alt position. This includes the navigation to reach the required release position and velocity.\n\
uint16 PAYLOAD_CONTROL_DEPLOY = 30002              # Control the payload deployment.\n\
\n\
# MAV_CMD_PREFLIGHT\n\
uint16 PREFLIGHT_CALIBRATION = 241                 # Trigger calibration. This command will be only accepted if in pre-flight mode. Except for Temperature Calibration, only one sensor should be set in a single message and all others should be zero.\n\
uint16 PREFLIGHT_SET_SENSOR_OFFSETS = 242          # Set sensor offsets. This command will be only accepted if in pre-flight mode.\n\
uint16 PREFLIGHT_UAVCAN = 243                      # Trigger UAVCAN config. This command will be only accepted if in pre-flight mode.\n\
uint16 PREFLIGHT_STORAGE = 245                     # Request storage of different parameter values and logs. This command will be only accepted if in pre-flight mode.\n\
uint16 PREFLIGHT_REBOOT_SHUTDOWN = 246             # Request the reboot or shutdown of system components.\n\
\n\
# MAV_CMD_REQUEST\n\
uint16 REQUEST_PROTOCOL_VERSION = 519              # Request MAVLink protocol version compatibility\n\
uint16 REQUEST_AUTOPILOT_CAPABILITIES = 520        # Request autopilot capabilities\n\
uint16 REQUEST_CAMERA_INFORMATION = 521            # Request camera information (CAMERA_INFORMATION).\n\
uint16 REQUEST_CAMERA_SETTINGS = 522               # Request camera settings (CAMERA_SETTINGS).\n\
uint16 REQUEST_STORAGE_INFORMATION = 525           # WIP: Request storage information (STORAGE_INFORMATION). Use the command's target_component to target a specific component's storage.\n\
uint16 REQUEST_CAMERA_CAPTURE_STATUS = 527         # Request camera capture status (CAMERA_CAPTURE_STATUS)\n\
uint16 REQUEST_FLIGHT_INFORMATION = 528            # WIP: Request flight information (FLIGHT_INFORMATION)\n\
uint16 REQUEST_CAMERA_IMAGE_CAPTURE = 2002         # WIP: Re-request a CAMERA_IMAGE_CAPTURE packet. Use NAN for reserved values.\n\
uint16 REQUEST_VIDEO_STREAM_INFORMATION = 2504     # WIP: Request video stream information (VIDEO_STREAM_INFORMATION)\n\
\n\
# MAV_CMD_RESET\n\
uint16 RESET_CAMERA_SETTINGS = 529                 # Reset all camera settings to Factory Default\n\
\n\
# MAV_CMD_SET\n\
uint16 SET_MESSAGE_INTERVAL = 511                  # Request the interval between messages for a particular MAVLink message ID. This interface replaces REQUEST_DATA_STREAM\n\
uint16 SET_CAMERA_MODE = 530                       # Set camera running mode. Use NAN for reserved values.\n\
uint16 SET_GUIDED_SUBMODE_STANDARD = 4000          # This command sets the submode to standard guided when vehicle is in guided mode. The vehicle holds position and altitude and the user can input the desired velocites along all three axes.\n\
\n\
uint16 SET_GUIDED_SUBMODE_CIRCLE = 4001            # This command sets submode circle when vehicle is in guided mode. Vehicle flies along a circle facing the center of the circle. The user can input the velocity along the circle and change the radius. If no input is given the vehicle will hold position.\n\
\n\
\n\
# MAV_CMD_START\n\
uint16 START_RX_PAIR = 500                         # Starts receiver pairing\n\
\n\
# MAV_CMD_STORAGE\n\
uint16 STORAGE_FORMAT = 526                        # WIP: Format a storage medium. Once format is complete, a STORAGE_INFORMATION message is sent. Use the command's target_component to target a specific component's storage.\n\
\n\
# MAV_CMD_UAVCAN\n\
uint16 UAVCAN_GET_NODE_INFO = 5200                 # Commands the vehicle to respond with a sequence of messages UAVCAN_NODE_INFO, one message per every UAVCAN node that is online. Note that some of the response messages can be lost, which the receiver can detect easily by checking whether every received UAVCAN_NODE_STATUS has a matching message UAVCAN_NODE_INFO received earlier; if not, this command should be sent again in order to request re-transmission of the node information messages.\n\
\n\
# MAV_CMD_VIDEO\n\
uint16 VIDEO_START_CAPTURE = 2500                  # Starts video capture (recording). Use NAN for reserved values.\n\
uint16 VIDEO_STOP_CAPTURE = 2501                   # Stop the current video capture (recording). Use NAN for reserved values.\n\
uint16 VIDEO_START_STREAMING = 2502                # WIP: Start video streaming\n\
uint16 VIDEO_STOP_STREAMING = 2503                 # WIP: Stop the current video streaming\n\
\n\
# [[[end]]] (checksum: 0ad5b96d02e81f5381e07e16e11fbacc)\n\
";
  }

  static const char* value(const ::mavros_msgs::CommandCode_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::CommandCode_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CommandCode_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::CommandCode_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::mavros_msgs::CommandCode_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_COMMANDCODE_H