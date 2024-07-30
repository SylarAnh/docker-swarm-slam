# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cslam_common_interfaces:msg/PoseGraphEdge.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'noise_std'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PoseGraphEdge(type):
    """Metaclass of message 'PoseGraphEdge'."""

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
            module = import_type_support('cslam_common_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cslam_common_interfaces.msg.PoseGraphEdge')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pose_graph_edge
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pose_graph_edge
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pose_graph_edge
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pose_graph_edge
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pose_graph_edge

            from cslam_common_interfaces.msg import MultiRobotKey
            if MultiRobotKey.__class__._TYPE_SUPPORT is None:
                MultiRobotKey.__class__.__import_type_support__()

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


class PoseGraphEdge(metaclass=Metaclass_PoseGraphEdge):
    """Message class 'PoseGraphEdge'."""

    __slots__ = [
        '_key_from',
        '_key_to',
        '_measurement',
        '_noise_std',
    ]

    _fields_and_field_types = {
        'key_from': 'cslam_common_interfaces/MultiRobotKey',
        'key_to': 'cslam_common_interfaces/MultiRobotKey',
        'measurement': 'geometry_msgs/Pose',
        'noise_std': 'double[6]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['cslam_common_interfaces', 'msg'], 'MultiRobotKey'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['cslam_common_interfaces', 'msg'], 'MultiRobotKey'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 6),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from cslam_common_interfaces.msg import MultiRobotKey
        self.key_from = kwargs.get('key_from', MultiRobotKey())
        from cslam_common_interfaces.msg import MultiRobotKey
        self.key_to = kwargs.get('key_to', MultiRobotKey())
        from geometry_msgs.msg import Pose
        self.measurement = kwargs.get('measurement', Pose())
        if 'noise_std' not in kwargs:
            self.noise_std = numpy.zeros(6, dtype=numpy.float64)
        else:
            self.noise_std = numpy.array(kwargs.get('noise_std'), dtype=numpy.float64)
            assert self.noise_std.shape == (6, )

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
        if self.key_from != other.key_from:
            return False
        if self.key_to != other.key_to:
            return False
        if self.measurement != other.measurement:
            return False
        if all(self.noise_std != other.noise_std):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def key_from(self):
        """Message field 'key_from'."""
        return self._key_from

    @key_from.setter
    def key_from(self, value):
        if __debug__:
            from cslam_common_interfaces.msg import MultiRobotKey
            assert \
                isinstance(value, MultiRobotKey), \
                "The 'key_from' field must be a sub message of type 'MultiRobotKey'"
        self._key_from = value

    @property
    def key_to(self):
        """Message field 'key_to'."""
        return self._key_to

    @key_to.setter
    def key_to(self, value):
        if __debug__:
            from cslam_common_interfaces.msg import MultiRobotKey
            assert \
                isinstance(value, MultiRobotKey), \
                "The 'key_to' field must be a sub message of type 'MultiRobotKey'"
        self._key_to = value

    @property
    def measurement(self):
        """Message field 'measurement'."""
        return self._measurement

    @measurement.setter
    def measurement(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'measurement' field must be a sub message of type 'Pose'"
        self._measurement = value

    @property
    def noise_std(self):
        """Message field 'noise_std'."""
        return self._noise_std

    @noise_std.setter
    def noise_std(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'noise_std' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 6, \
                "The 'noise_std' numpy.ndarray() must have a size of 6"
            self._noise_std = value
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
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'noise_std' field must be a set or sequence with length 6 and each value of type 'float'"
        self._noise_std = numpy.array(value, dtype=numpy.float64)
