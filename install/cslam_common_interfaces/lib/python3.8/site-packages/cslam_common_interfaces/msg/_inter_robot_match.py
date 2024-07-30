# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cslam_common_interfaces:msg/InterRobotMatch.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InterRobotMatch(type):
    """Metaclass of message 'InterRobotMatch'."""

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
                'cslam_common_interfaces.msg.InterRobotMatch')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__inter_robot_match
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__inter_robot_match
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__inter_robot_match
            cls._TYPE_SUPPORT = module.type_support_msg__msg__inter_robot_match
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__inter_robot_match

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InterRobotMatch(metaclass=Metaclass_InterRobotMatch):
    """Message class 'InterRobotMatch'."""

    __slots__ = [
        '_robot0_id',
        '_robot0_keyframe_id',
        '_robot1_id',
        '_robot1_keyframe_id',
        '_weight',
    ]

    _fields_and_field_types = {
        'robot0_id': 'uint32',
        'robot0_keyframe_id': 'uint32',
        'robot1_id': 'uint32',
        'robot1_keyframe_id': 'uint32',
        'weight': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.robot0_id = kwargs.get('robot0_id', int())
        self.robot0_keyframe_id = kwargs.get('robot0_keyframe_id', int())
        self.robot1_id = kwargs.get('robot1_id', int())
        self.robot1_keyframe_id = kwargs.get('robot1_keyframe_id', int())
        self.weight = kwargs.get('weight', float())

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
        if self.robot0_id != other.robot0_id:
            return False
        if self.robot0_keyframe_id != other.robot0_keyframe_id:
            return False
        if self.robot1_id != other.robot1_id:
            return False
        if self.robot1_keyframe_id != other.robot1_keyframe_id:
            return False
        if self.weight != other.weight:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def robot0_id(self):
        """Message field 'robot0_id'."""
        return self._robot0_id

    @robot0_id.setter
    def robot0_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robot0_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'robot0_id' field must be an unsigned integer in [0, 4294967295]"
        self._robot0_id = value

    @property
    def robot0_keyframe_id(self):
        """Message field 'robot0_keyframe_id'."""
        return self._robot0_keyframe_id

    @robot0_keyframe_id.setter
    def robot0_keyframe_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robot0_keyframe_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'robot0_keyframe_id' field must be an unsigned integer in [0, 4294967295]"
        self._robot0_keyframe_id = value

    @property
    def robot1_id(self):
        """Message field 'robot1_id'."""
        return self._robot1_id

    @robot1_id.setter
    def robot1_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robot1_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'robot1_id' field must be an unsigned integer in [0, 4294967295]"
        self._robot1_id = value

    @property
    def robot1_keyframe_id(self):
        """Message field 'robot1_keyframe_id'."""
        return self._robot1_keyframe_id

    @robot1_keyframe_id.setter
    def robot1_keyframe_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robot1_keyframe_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'robot1_keyframe_id' field must be an unsigned integer in [0, 4294967295]"
        self._robot1_keyframe_id = value

    @property
    def weight(self):
        """Message field 'weight'."""
        return self._weight

    @weight.setter
    def weight(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'weight' field must be of type 'float'"
        self._weight = value
