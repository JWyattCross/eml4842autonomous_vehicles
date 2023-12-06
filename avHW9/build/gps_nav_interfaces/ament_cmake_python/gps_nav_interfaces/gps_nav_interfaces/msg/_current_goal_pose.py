# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gps_nav_interfaces:msg/CurrentGoalPose.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CurrentGoalPose(type):
    """Metaclass of message 'CurrentGoalPose'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('gps_nav_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'gps_nav_interfaces.msg.CurrentGoalPose')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__current_goal_pose
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__current_goal_pose
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__current_goal_pose
            cls._TYPE_SUPPORT = module.type_support_msg__msg__current_goal_pose
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__current_goal_pose

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CurrentGoalPose(metaclass=Metaclass_CurrentGoalPose):
    """Message class 'CurrentGoalPose'."""

    __slots__ = [
        '_current_goal_pose',
        '_closest_pose',
        '_speed',
        '_state',
    ]

    _fields_and_field_types = {
        'current_goal_pose': 'geometry_msgs/PoseStamped',
        'closest_pose': 'geometry_msgs/PoseStamped',
        'speed': 'float',
        'state': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import PoseStamped
        self.current_goal_pose = kwargs.get('current_goal_pose', PoseStamped())
        from geometry_msgs.msg import PoseStamped
        self.closest_pose = kwargs.get('closest_pose', PoseStamped())
        self.speed = kwargs.get('speed', float())
        self.state = kwargs.get('state', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.current_goal_pose != other.current_goal_pose:
            return False
        if self.closest_pose != other.closest_pose:
            return False
        if self.speed != other.speed:
            return False
        if self.state != other.state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def current_goal_pose(self):
        """Message field 'current_goal_pose'."""
        return self._current_goal_pose

    @current_goal_pose.setter
    def current_goal_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'current_goal_pose' field must be a sub message of type 'PoseStamped'"
        self._current_goal_pose = value

    @builtins.property
    def closest_pose(self):
        """Message field 'closest_pose'."""
        return self._closest_pose

    @closest_pose.setter
    def closest_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'closest_pose' field must be a sub message of type 'PoseStamped'"
        self._closest_pose = value

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed = value

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'state' field must be an integer in [-32768, 32767]"
        self._state = value
