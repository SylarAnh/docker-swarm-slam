# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cslam_common_interfaces:msg/PoseGraph.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'gps_values_idx'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PoseGraph(type):
    """Metaclass of message 'PoseGraph'."""

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
                'cslam_common_interfaces.msg.PoseGraph')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pose_graph
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pose_graph
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pose_graph
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pose_graph
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pose_graph

            from cslam_common_interfaces.msg import InterRobotMatches
            if InterRobotMatches.__class__._TYPE_SUPPORT is None:
                InterRobotMatches.__class__.__import_type_support__()

            from cslam_common_interfaces.msg import PoseGraphEdge
            if PoseGraphEdge.__class__._TYPE_SUPPORT is None:
                PoseGraphEdge.__class__.__import_type_support__()

            from cslam_common_interfaces.msg import PoseGraphValue
            if PoseGraphValue.__class__._TYPE_SUPPORT is None:
                PoseGraphValue.__class__.__import_type_support__()

            from cslam_common_interfaces.msg import RobotIds
            if RobotIds.__class__._TYPE_SUPPORT is None:
                RobotIds.__class__.__import_type_support__()

            from sensor_msgs.msg import NavSatFix
            if NavSatFix.__class__._TYPE_SUPPORT is None:
                NavSatFix.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PoseGraph(metaclass=Metaclass_PoseGraph):
    """Message class 'PoseGraph'."""

    __slots__ = [
        '_robot_id',
        '_origin_robot_id',
        '_connected_robots',
        '_edges',
        '_values',
        '_gps_values_idx',
        '_gps_values',
        '_nb_matches',
        '_nb_failed_matches',
        '_nb_vertices_transmitted',
        '_nb_matches_selected',
        '_front_end_cumulative_communication_bytes',
        '_sparsification_cumulative_computation_time',
        '_spectral_matches',
    ]

    _fields_and_field_types = {
        'robot_id': 'uint32',
        'origin_robot_id': 'uint32',
        'connected_robots': 'cslam_common_interfaces/RobotIds',
        'edges': 'sequence<cslam_common_interfaces/PoseGraphEdge>',
        'values': 'sequence<cslam_common_interfaces/PoseGraphValue>',
        'gps_values_idx': 'sequence<uint32>',
        'gps_values': 'sequence<sensor_msgs/NavSatFix>',
        'nb_matches': 'uint32',
        'nb_failed_matches': 'uint32',
        'nb_vertices_transmitted': 'uint32',
        'nb_matches_selected': 'uint32',
        'front_end_cumulative_communication_bytes': 'uint64',
        'sparsification_cumulative_computation_time': 'double',
        'spectral_matches': 'cslam_common_interfaces/InterRobotMatches',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['cslam_common_interfaces', 'msg'], 'RobotIds'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['cslam_common_interfaces', 'msg'], 'PoseGraphEdge')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['cslam_common_interfaces', 'msg'], 'PoseGraphValue')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'NavSatFix')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['cslam_common_interfaces', 'msg'], 'InterRobotMatches'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.robot_id = kwargs.get('robot_id', int())
        self.origin_robot_id = kwargs.get('origin_robot_id', int())
        from cslam_common_interfaces.msg import RobotIds
        self.connected_robots = kwargs.get('connected_robots', RobotIds())
        self.edges = kwargs.get('edges', [])
        self.values = kwargs.get('values', [])
        self.gps_values_idx = array.array('I', kwargs.get('gps_values_idx', []))
        self.gps_values = kwargs.get('gps_values', [])
        self.nb_matches = kwargs.get('nb_matches', int())
        self.nb_failed_matches = kwargs.get('nb_failed_matches', int())
        self.nb_vertices_transmitted = kwargs.get('nb_vertices_transmitted', int())
        self.nb_matches_selected = kwargs.get('nb_matches_selected', int())
        self.front_end_cumulative_communication_bytes = kwargs.get('front_end_cumulative_communication_bytes', int())
        self.sparsification_cumulative_computation_time = kwargs.get('sparsification_cumulative_computation_time', float())
        from cslam_common_interfaces.msg import InterRobotMatches
        self.spectral_matches = kwargs.get('spectral_matches', InterRobotMatches())

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
        if self.origin_robot_id != other.origin_robot_id:
            return False
        if self.connected_robots != other.connected_robots:
            return False
        if self.edges != other.edges:
            return False
        if self.values != other.values:
            return False
        if self.gps_values_idx != other.gps_values_idx:
            return False
        if self.gps_values != other.gps_values:
            return False
        if self.nb_matches != other.nb_matches:
            return False
        if self.nb_failed_matches != other.nb_failed_matches:
            return False
        if self.nb_vertices_transmitted != other.nb_vertices_transmitted:
            return False
        if self.nb_matches_selected != other.nb_matches_selected:
            return False
        if self.front_end_cumulative_communication_bytes != other.front_end_cumulative_communication_bytes:
            return False
        if self.sparsification_cumulative_computation_time != other.sparsification_cumulative_computation_time:
            return False
        if self.spectral_matches != other.spectral_matches:
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
    def connected_robots(self):
        """Message field 'connected_robots'."""
        return self._connected_robots

    @connected_robots.setter
    def connected_robots(self, value):
        if __debug__:
            from cslam_common_interfaces.msg import RobotIds
            assert \
                isinstance(value, RobotIds), \
                "The 'connected_robots' field must be a sub message of type 'RobotIds'"
        self._connected_robots = value

    @property
    def edges(self):
        """Message field 'edges'."""
        return self._edges

    @edges.setter
    def edges(self, value):
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
                "The 'edges' field must be a set or sequence and each value of type 'PoseGraphEdge'"
        self._edges = value

    @property
    def values(self):
        """Message field 'values'."""
        return self._values

    @values.setter
    def values(self, value):
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
                "The 'values' field must be a set or sequence and each value of type 'PoseGraphValue'"
        self._values = value

    @property
    def gps_values_idx(self):
        """Message field 'gps_values_idx'."""
        return self._gps_values_idx

    @gps_values_idx.setter
    def gps_values_idx(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'gps_values_idx' array.array() must have the type code of 'I'"
            self._gps_values_idx = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'gps_values_idx' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._gps_values_idx = array.array('I', value)

    @property
    def gps_values(self):
        """Message field 'gps_values'."""
        return self._gps_values

    @gps_values.setter
    def gps_values(self, value):
        if __debug__:
            from sensor_msgs.msg import NavSatFix
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
                 all(isinstance(v, NavSatFix) for v in value) and
                 True), \
                "The 'gps_values' field must be a set or sequence and each value of type 'NavSatFix'"
        self._gps_values = value

    @property
    def nb_matches(self):
        """Message field 'nb_matches'."""
        return self._nb_matches

    @nb_matches.setter
    def nb_matches(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nb_matches' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'nb_matches' field must be an unsigned integer in [0, 4294967295]"
        self._nb_matches = value

    @property
    def nb_failed_matches(self):
        """Message field 'nb_failed_matches'."""
        return self._nb_failed_matches

    @nb_failed_matches.setter
    def nb_failed_matches(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nb_failed_matches' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'nb_failed_matches' field must be an unsigned integer in [0, 4294967295]"
        self._nb_failed_matches = value

    @property
    def nb_vertices_transmitted(self):
        """Message field 'nb_vertices_transmitted'."""
        return self._nb_vertices_transmitted

    @nb_vertices_transmitted.setter
    def nb_vertices_transmitted(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nb_vertices_transmitted' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'nb_vertices_transmitted' field must be an unsigned integer in [0, 4294967295]"
        self._nb_vertices_transmitted = value

    @property
    def nb_matches_selected(self):
        """Message field 'nb_matches_selected'."""
        return self._nb_matches_selected

    @nb_matches_selected.setter
    def nb_matches_selected(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nb_matches_selected' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'nb_matches_selected' field must be an unsigned integer in [0, 4294967295]"
        self._nb_matches_selected = value

    @property
    def front_end_cumulative_communication_bytes(self):
        """Message field 'front_end_cumulative_communication_bytes'."""
        return self._front_end_cumulative_communication_bytes

    @front_end_cumulative_communication_bytes.setter
    def front_end_cumulative_communication_bytes(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'front_end_cumulative_communication_bytes' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'front_end_cumulative_communication_bytes' field must be an unsigned integer in [0, 18446744073709551615]"
        self._front_end_cumulative_communication_bytes = value

    @property
    def sparsification_cumulative_computation_time(self):
        """Message field 'sparsification_cumulative_computation_time'."""
        return self._sparsification_cumulative_computation_time

    @sparsification_cumulative_computation_time.setter
    def sparsification_cumulative_computation_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sparsification_cumulative_computation_time' field must be of type 'float'"
        self._sparsification_cumulative_computation_time = value

    @property
    def spectral_matches(self):
        """Message field 'spectral_matches'."""
        return self._spectral_matches

    @spectral_matches.setter
    def spectral_matches(self, value):
        if __debug__:
            from cslam_common_interfaces.msg import InterRobotMatches
            assert \
                isinstance(value, InterRobotMatches), \
                "The 'spectral_matches' field must be a sub message of type 'InterRobotMatches'"
        self._spectral_matches = value
