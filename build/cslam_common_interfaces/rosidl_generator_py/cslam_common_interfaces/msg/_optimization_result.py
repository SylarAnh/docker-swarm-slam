# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cslam_common_interfaces:msg/OptimizationResult.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OptimizationResult(type):
    """Metaclass of message 'OptimizationResult'."""

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
                'cslam_common_interfaces.msg.OptimizationResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__optimization_result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__optimization_result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__optimization_result
            cls._TYPE_SUPPORT = module.type_support_msg__msg__optimization_result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__optimization_result

            from cslam_common_interfaces.msg import PoseGraphEdge
            if PoseGraphEdge.__class__._TYPE_SUPPORT is None:
                PoseGraphEdge.__class__.__import_type_support__()

            from cslam_common_interfaces.msg import PoseGraphValue
            if PoseGraphValue.__class__._TYPE_SUPPORT is None:
                PoseGraphValue.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OptimizationResult(metaclass=Metaclass_OptimizationResult):
    """Message class 'OptimizationResult'."""

    __slots__ = [
        '_success',
        '_origin_robot_id',
        '_factors',
        '_estimates',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'origin_robot_id': 'uint32',
        'factors': 'sequence<cslam_common_interfaces/PoseGraphEdge>',
        'estimates': 'sequence<cslam_common_interfaces/PoseGraphValue>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['cslam_common_interfaces', 'msg'], 'PoseGraphEdge')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['cslam_common_interfaces', 'msg'], 'PoseGraphValue')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.origin_robot_id = kwargs.get('origin_robot_id', int())
        self.factors = kwargs.get('factors', [])
        self.estimates = kwargs.get('estimates', [])

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
        if self.success != other.success:
            return False
        if self.origin_robot_id != other.origin_robot_id:
            return False
        if self.factors != other.factors:
            return False
        if self.estimates != other.estimates:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @property
    def origin_robot_id(self):
        """Message field 'origin_robot_id'."""
        return self._origin_robot_id

    @origin_robot_id.setter
    def origin_robot_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'origin_robot_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'origin_robot_id' field must be an unsigned integer in [0, 4294967295]"
        self._origin_robot_id = value

    @property
    def factors(self):
        """Message field 'factors'."""
        return self._factors

    @factors.setter
    def factors(self, value):
        if __debug__:
            from cslam_common_interfaces.msg import PoseGraphEdge
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
                 all(isinstance(v, PoseGraphEdge) for v in value) and
                 True), \
                "The 'factors' field must be a set or sequence and each value of type 'PoseGraphEdge'"
        self._factors = value

    @property
    def estimates(self):
        """Message field 'estimates'."""
        return self._estimates

    @estimates.setter
    def estimates(self, value):
        if __debug__:
            from cslam_common_interfaces.msg import PoseGraphValue
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
                 all(isinstance(v, PoseGraphValue) for v in value) and
                 True), \
                "The 'estimates' field must be a set or sequence and each value of type 'PoseGraphValue'"
        self._estimates = value
