# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cslam_common_interfaces:msg/LocalKeyframeMatch.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LocalKeyframeMatch(type):
    """Metaclass of message 'LocalKeyframeMatch'."""

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
                'cslam_common_interfaces.msg.LocalKeyframeMatch')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__local_keyframe_match
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__local_keyframe_match
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__local_keyframe_match
            cls._TYPE_SUPPORT = module.type_support_msg__msg__local_keyframe_match
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__local_keyframe_match

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LocalKeyframeMatch(metaclass=Metaclass_LocalKeyframeMatch):
    """Message class 'LocalKeyframeMatch'."""

    __slots__ = [
        '_keyframe0_id',
        '_keyframe1_id',
    ]

    _fields_and_field_types = {
        'keyframe0_id': 'uint32',
        'keyframe1_id': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.keyframe0_id = kwargs.get('keyframe0_id', int())
        self.keyframe1_id = kwargs.get('keyframe1_id', int())

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
        if self.keyframe0_id != other.keyframe0_id:
            return False
        if self.keyframe1_id != other.keyframe1_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def keyframe0_id(self):
        """Message field 'keyframe0_id'."""
        return self._keyframe0_id

    @keyframe0_id.setter
    def keyframe0_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'keyframe0_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'keyframe0_id' field must be an unsigned integer in [0, 4294967295]"
        self._keyframe0_id = value

    @property
    def keyframe1_id(self):
        """Message field 'keyframe1_id'."""
        return self._keyframe1_id

    @keyframe1_id.setter
    def keyframe1_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'keyframe1_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'keyframe1_id' field must be an unsigned integer in [0, 4294967295]"
        self._keyframe1_id = value
