# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gps_nav_interfaces:srv/GetRoutePoses.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetRoutePoses_Request(type):
    """Metaclass of message 'GetRoutePoses_Request'."""

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
                'gps_nav_interfaces.srv.GetRoutePoses_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_route_poses__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_route_poses__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_route_poses__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_route_poses__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_route_poses__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetRoutePoses_Request(metaclass=Metaclass_GetRoutePoses_Request):
    """Message class 'GetRoutePoses_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'state'
import numpy  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetRoutePoses_Response(type):
    """Metaclass of message 'GetRoutePoses_Response'."""

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
                'gps_nav_interfaces.srv.GetRoutePoses_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_route_poses__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_route_poses__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_route_poses__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_route_poses__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_route_poses__response

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetRoutePoses_Response(metaclass=Metaclass_GetRoutePoses_Response):
    """Message class 'GetRoutePoses_Response'."""

    __slots__ = [
        '_num_route_poses',
        '_mypose',
        '_offset_x',
        '_offset_y',
        '_state',
        '_want_loop',
        '_state_dictionary',
    ]

    _fields_and_field_types = {
        'num_route_poses': 'int16',
        'mypose': 'geometry_msgs/Pose[300]',
        'offset_x': 'double',
        'offset_y': 'double',
        'state': 'int16[300]',
        'want_loop': 'boolean',
        'state_dictionary': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'), 300),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int16'), 300),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.num_route_poses = kwargs.get('num_route_poses', int())
        from geometry_msgs.msg import Pose
        self.mypose = kwargs.get(
            'mypose',
            [Pose() for x in range(300)]
        )
        self.offset_x = kwargs.get('offset_x', float())
        self.offset_y = kwargs.get('offset_y', float())
        if 'state' not in kwargs:
            self.state = numpy.zeros(300, dtype=numpy.int16)
        else:
            self.state = numpy.array(kwargs.get('state'), dtype=numpy.int16)
            assert self.state.shape == (300, )
        self.want_loop = kwargs.get('want_loop', bool())
        self.state_dictionary = kwargs.get('state_dictionary', str())

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
        if self.num_route_poses != other.num_route_poses:
            return False
        if self.mypose != other.mypose:
            return False
        if self.offset_x != other.offset_x:
            return False
        if self.offset_y != other.offset_y:
            return False
        if all(self.state != other.state):
            return False
        if self.want_loop != other.want_loop:
            return False
        if self.state_dictionary != other.state_dictionary:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def num_route_poses(self):
        """Message field 'num_route_poses'."""
        return self._num_route_poses

    @num_route_poses.setter
    def num_route_poses(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_route_poses' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'num_route_poses' field must be an integer in [-32768, 32767]"
        self._num_route_poses = value

    @builtins.property
    def mypose(self):
        """Message field 'mypose'."""
        return self._mypose

    @mypose.setter
    def mypose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 300 and
                 all(isinstance(v, Pose) for v in value) and
                 True), \
                "The 'mypose' field must be a set or sequence with length 300 and each value of type 'Pose'"
        self._mypose = value

    @builtins.property
    def offset_x(self):
        """Message field 'offset_x'."""
        return self._offset_x

    @offset_x.setter
    def offset_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'offset_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'offset_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._offset_x = value

    @builtins.property
    def offset_y(self):
        """Message field 'offset_y'."""
        return self._offset_y

    @offset_y.setter
    def offset_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'offset_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'offset_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._offset_y = value

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int16, \
                "The 'state' numpy.ndarray() must have the dtype of 'numpy.int16'"
            assert value.size == 300, \
                "The 'state' numpy.ndarray() must have a size of 300"
            self._state = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 300 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'state' field must be a set or sequence with length 300 and each value of type 'int' and each integer in [-32768, 32767]"
        self._state = numpy.array(value, dtype=numpy.int16)

    @builtins.property
    def want_loop(self):
        """Message field 'want_loop'."""
        return self._want_loop

    @want_loop.setter
    def want_loop(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'want_loop' field must be of type 'bool'"
        self._want_loop = value

    @builtins.property
    def state_dictionary(self):
        """Message field 'state_dictionary'."""
        return self._state_dictionary

    @state_dictionary.setter
    def state_dictionary(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'state_dictionary' field must be of type 'str'"
        self._state_dictionary = value


class Metaclass_GetRoutePoses(type):
    """Metaclass of service 'GetRoutePoses'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('gps_nav_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'gps_nav_interfaces.srv.GetRoutePoses')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_route_poses

            from gps_nav_interfaces.srv import _get_route_poses
            if _get_route_poses.Metaclass_GetRoutePoses_Request._TYPE_SUPPORT is None:
                _get_route_poses.Metaclass_GetRoutePoses_Request.__import_type_support__()
            if _get_route_poses.Metaclass_GetRoutePoses_Response._TYPE_SUPPORT is None:
                _get_route_poses.Metaclass_GetRoutePoses_Response.__import_type_support__()


class GetRoutePoses(metaclass=Metaclass_GetRoutePoses):
    from gps_nav_interfaces.srv._get_route_poses import GetRoutePoses_Request as Request
    from gps_nav_interfaces.srv._get_route_poses import GetRoutePoses_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
