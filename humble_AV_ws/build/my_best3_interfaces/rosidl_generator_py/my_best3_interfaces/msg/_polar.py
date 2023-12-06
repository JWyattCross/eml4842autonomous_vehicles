# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_best3_interfaces:msg/Polar.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Polar(type):
    """Metaclass of message 'Polar'."""

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
            module = import_type_support('my_best3_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_best3_interfaces.msg.Polar')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__polar
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__polar
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__polar
            cls._TYPE_SUPPORT = module.type_support_msg__msg__polar
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__polar

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Polar(metaclass=Metaclass_Polar):
    """Message class 'Polar'."""

    __slots__ = [
        '_r_meters',
        '_theta_rad',
        '_point',
    ]

    _fields_and_field_types = {
        'r_meters': 'double',
        'theta_rad': 'double',
        'point': 'geometry_msgs/Vector3',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.r_meters = kwargs.get('r_meters', float())
        self.theta_rad = kwargs.get('theta_rad', float())
        from geometry_msgs.msg import Vector3
        self.point = kwargs.get('point', Vector3())

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
        if self.r_meters != other.r_meters:
            return False
        if self.theta_rad != other.theta_rad:
            return False
        if self.point != other.point:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def r_meters(self):
        """Message field 'r_meters'."""
        return self._r_meters

    @r_meters.setter
    def r_meters(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'r_meters' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'r_meters' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._r_meters = value

    @builtins.property
    def theta_rad(self):
        """Message field 'theta_rad'."""
        return self._theta_rad

    @theta_rad.setter
    def theta_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta_rad' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'theta_rad' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._theta_rad = value

    @builtins.property
    def point(self):
        """Message field 'point'."""
        return self._point

    @point.setter
    def point(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'point' field must be a sub message of type 'Vector3'"
        self._point = value
