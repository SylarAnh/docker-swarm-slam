# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cslam_common_interfaces:msg/ReferenceFrames.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ReferenceFrames(type):
    """Metaclass of message 'ReferenceFrames'."""

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
                'cslam_common_interfaces.msg.ReferenceFrames')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__reference_frames
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__reference_frames
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__reference_frames
            cls._TYPE_SUPPORT = module.type_support_msg__msg__reference_frames
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__reference_frames

            from geometry_msgs.msg import TransformStamped
            if TransformStamped.__class__._TYPE_SUPPORT is None:
                TransformStamped.__class__.__import_type_support__()

            from std_msgs.msg import String
            if String.__class__._TYPE_SUPPORT is None:
                String.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ReferenceFrames(metaclass=Metaclass_ReferenceFrames):
    """Message class 'ReferenceFrames'."""

    __slots__ = [
        '_robot_id',
        '_origin_to_local',
        '_frames_id',
        '_transforms',
    ]

    _fields_and_field_types = {
        'robot_id': 'uint32',
        'origin_to_local': 'geometry_msgs/TransformStamped',
        'frames_id': 'sequence<std_msgs/String>',
        'transforms': 'sequence<geometry_msgs/TransformStamped>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'TransformStamped'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'TransformStamped')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.robot_id = kwargs.get('robot_id', int())
        from geometry_msgs.msg import TransformStamped
        self.origin_to_local = kwargs.get('origin_to_local', TransformStamped())
        self.frames_id = kwargs.get('frames_id', [])
        self.transforms = kwargs.get('transforms', [])

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
        if self.robot_id != other.robot_id:
            return False
        if self.origin_to_local != other.origin_to_local:
            return False
        if self.frames_id != other.frames_id:
            return False
        if self.transforms != other.transforms:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def robot_id(self):
        """Message field 'robot_id'."""
        return self._robot_id

    @robot_id.setter
    def robot_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robot_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'robot_id' field must be an unsigned integer in [0, 4294967295]"
        self._robot_id = value

    @property
    def origin_to_local(self):
        """Message field 'origin_to_local'."""
        return self._origin_to_local

    @origin_to_local.setter
    def origin_to_local(self, value):
        if __debug__:
            from geometry_msgs.msg import TransformStamped
            assert \
                isinstance(value, TransformStamped), \
                "The 'origin_to_local' field must be a sub message of type 'TransformStamped'"
        self._origin_to_local = value

    @property
    def frames_id(self):
        """Message field 'frames_id'."""
        return self._frames_id

    @frames_id.setter
    def frames_id(self, value):
        if __debug__:
            from std_msgs.msg import String
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
                 all(isinstance(v, String) for v in value) and
                 True), \
                "The 'frames_id' field must be a set or sequence and each value of type 'String'"
        self._frames_id = value

    @property
    def transforms(self):
        """Message field 'transforms'."""
        return self._transforms

    @transforms.setter
    def transforms(self, value):
        if __debug__:
            from geometry_msgs.msg import TransformStamped
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
                 all(isinstance(v, TransformStamped) for v in value) and
                 True), \
                "The 'transforms' field must be a set or sequence and each value of type 'TransformStamped'"
        self._transforms = value
