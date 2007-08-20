/********************************************************************
* Description: rs274ngc_return.hh
*
*   Derived from a work by Thomas Kramer
*
* Author:
* License: GPL Version 2
* System: Linux
*    
* Copyright (c) 2004 All rights reserved.
*
* Last change:
* $Revision$
* $Author$
* $Date$
********************************************************************/
#ifndef RS274NGC_RETURN_H
#define RS274NGC_RETURN_H

// Include the public return value declarations
#include "interp_return.hh"

#define NCE_A_FILE_IS_ALREADY_OPEN 5
#define NCE_ALL_AXES_MISSING_WITH_G92 6
#define NCE_ALL_AXES_MISSING_WITH_MOTION_CODE 7
#define NCE_ARC_RADIUS_TOO_SMALL_TO_REACH_END_POINT 8
#define NCE_ARGUMENT_TO_ACOS_OUT_OF_RANGE 9
#define NCE_ARGUMENT_TO_ASIN_OUT_OF_RANGE 10
#define NCE_ATTEMPT_TO_DIVIDE_BY_ZERO 11
#define NCE_ATTEMPT_TO_RAISE_NEGATIVE_TO_NON_INTEGER_POWER 12
#define NCE_BAD_CHARACTER_USED 13
#define NCE_BAD_FORMAT_UNSIGNED_INTEGER 14
#define NCE_BAD_NUMBER_FORMAT 15
#define NCE_BUG_BAD_G_CODE_MODAL_GROUP_0 16
#define NCE_BUG_CODE_NOT_G0_OR_G1 17
#define NCE_BUG_CODE_NOT_G17_G18_OR_G19 18
#define NCE_BUG_CODE_NOT_G20_OR_G21 19
#define NCE_BUG_CODE_NOT_G28_OR_G30 20
#define NCE_BUG_CODE_NOT_G2_OR_G3 21
#define NCE_BUG_CODE_NOT_G40_G41_OR_G42 22
#define NCE_BUG_CODE_NOT_G43_OR_G49 23
#define NCE_BUG_CODE_NOT_G4_G10_G28_G30_G53_OR_G92_SERIES 24
#define NCE_BUG_CODE_NOT_G61_G61_1_OR_G64 25
#define NCE_BUG_CODE_NOT_G90_OR_G91 26
#define NCE_BUG_CODE_NOT_G93_OR_G94 27
#define NCE_BUG_CODE_NOT_G98_OR_G99 28
#define NCE_BUG_CODE_NOT_IN_G92_SERIES 29
#define NCE_BUG_CODE_NOT_IN_RANGE_G54_TO_G593 30
#define NCE_BUG_CODE_NOT_M0_M1_M2_M30_M60 31
#define NCE_BUG_DISTANCE_MODE_NOT_G90_OR_G91 32
#define NCE_BUG_FUNCTION_SHOULD_NOT_HAVE_BEEN_CALLED 33
#define NCE_BUG_IN_TOOL_RADIUS_COMP 34
#define NCE_BUG_PLANE_NOT_XY_YZ_OR_XZ 35
#define NCE_BUG_SIDE_NOT_RIGHT_OR_LEFT 36
#define NCE_BUG_UNKNOWN_MOTION_CODE 37
#define NCE_BUG_UNKNOWN_OPERATION 38
#define NCE_CANNOT_CHANGE_AXIS_OFFSETS_WITH_CUTTER_RADIUS_COMP 39
#define NCE_CANNOT_CHANGE_UNITS_WITH_CUTTER_RADIUS_COMP 40
#define NCE_CANNOT_CREATE_BACKUP_FILE 41
#define NCE_CANNOT_DO_G1_WITH_ZERO_FEED_RATE 42
#define NCE_CANNOT_DO_ZERO_REPEATS_OF_CYCLE 43
#define NCE_CANNOT_MAKE_ARC_WITH_ZERO_FEED_RATE 44
#define NCE_CANNOT_MOVE_ROTARY_AXES_DURING_PROBING 45
#define NCE_CANNOT_OPEN_BACKUP_FILE 46
#define NCE_CANNOT_OPEN_VARIABLE_FILE 47
#define NCE_CANNOT_PROBE_IN_INVERSE_TIME_FEED_MODE 48
#define NCE_CANNOT_PROBE_WITH_CUTTER_RADIUS_COMP_ON 49
#define NCE_CANNOT_PROBE_WITH_ZERO_FEED_RATE 50
#define NCE_CANNOT_PUT_A_B_IN_CANNED_CYCLE 51
#define NCE_CANNOT_PUT_A_C_IN_CANNED_CYCLE 52
#define NCE_CANNOT_PUT_AN_A_IN_CANNED_CYCLE 53
#define NCE_CANNOT_TURN_CUTTER_RADIUS_COMP_ON_OUT_OF_XY_PLANE 54
#define NCE_CANNOT_TURN_CUTTER_RADIUS_COMP_ON_WHEN_ON 55
#define NCE_CANNOT_USE_A_WORD 56
#define NCE_CANNOT_USE_AXIS_VALUES_WITH_G80 57
#define NCE_CANNOT_USE_AXIS_VALUES_WITHOUT_A_G_CODE_THAT_USES_THEM 58
#define NCE_CANNOT_USE_B_WORD 59
#define NCE_CANNOT_USE_C_WORD 60
#define NCE_CANNOT_USE_G28_OR_G30_WITH_CUTTER_RADIUS_COMP 61
#define NCE_CANNOT_USE_G53_INCREMENTAL 62
#define NCE_CANNOT_USE_G53_WITH_CUTTER_RADIUS_COMP 63
#define NCE_CANNOT_USE_TWO_G_CODES_THAT_BOTH_USE_AXIS_VALUES 64
#define NCE_CANNOT_USE_XZ_PLANE_WITH_CUTTER_RADIUS_COMP 65
#define NCE_CANNOT_USE_YZ_PLANE_WITH_CUTTER_RADIUS_COMP 66
#define NCE_COMMAND_TOO_LONG 67
#define NCE_CONCAVE_CORNER_WITH_CUTTER_RADIUS_COMP 68
#define NCE_COORDINATE_SYSTEM_INDEX_PARAMETER_5220_OUT_OF_RANGE 69
#define NCE_CURRENT_POINT_SAME_AS_END_POINT_OF_ARC 70
#define NCE_CUTTER_GOUGING_WITH_CUTTER_RADIUS_COMP 71
#define NCE_D_WORD_WITH_NO_G41_OR_G42 72
#define NCE_DWELL_TIME_MISSING_WITH_G4 73
#define NCE_DWELL_TIME_P_WORD_MISSING_WITH_G82 74
#define NCE_DWELL_TIME_P_WORD_MISSING_WITH_G86 75
#define NCE_DWELL_TIME_P_WORD_MISSING_WITH_G88 76
#define NCE_DWELL_TIME_P_WORD_MISSING_WITH_G89 77
#define NCE_EQUAL_SIGN_MISSING_IN_PARAMETER_SETTING 78
#define NCE_F_WORD_MISSING_WITH_INVERSE_TIME_ARC_MOVE 79
#define NCE_F_WORD_MISSING_WITH_INVERSE_TIME_G1_MOVE 80
#define NCE_FILE_ENDED_WITH_NO_PERCENT_SIGN 81
#define NCE_FILE_ENDED_WITH_NO_PERCENT_SIGN_OR_PROGRAM_END 82
#define NCE_FILE_NAME_TOO_LONG 83
#define NCE_G_CODE_OUT_OF_RANGE 84
#define NCE_H_WORD_WITH_NO_G43 85
#define NCE_I_WORD_GIVEN_FOR_ARC_IN_YZ_PLANE 86
#define NCE_I_WORD_MISSING_WITH_G87 87
#define NCE_I_WORD_WITH_NO_G2_OR_G3_G76_OR_G87_TO_USE_IT 88
#define NCE_J_WORD_GIVEN_FOR_ARC_IN_XZ_PLANE 89
#define NCE_J_WORD_MISSING_WITH_G87 90
#define NCE_J_WORD_WITH_NO_G2_OR_G3_G76_OR_G87_TO_USE_IT 91
#define NCE_K_WORD_GIVEN_FOR_ARC_IN_XY_PLANE 92
#define NCE_K_WORD_MISSING_WITH_G87 93
#define NCE_K_WORD_WITH_NO_G2_OR_G3_G76_OR_G87_TO_USE_IT 94
#define NCE_L_WORD_WITH_NO_CANNED_CYCLE_OR_G10 95
#define NCE_LEFT_BRACKET_MISSING_AFTER_SLASH_WITH_ATAN 96
#define NCE_LEFT_BRACKET_MISSING_AFTER_UNARY_OPERATION_NAME 97
#define NCE_LINE_NUMBER_GREATER_THAN_99999 98
#define NCE_LINE_WITH_G10_DOES_NOT_HAVE_L2 99
#define NCE_M_CODE_GREATER_THAN_199 100
#define NCE_MIXED_RADIUS_IJK_FORMAT_FOR_ARC 101
#define NCE_MULTIPLE_A_WORDS_ON_ONE_LINE 102
#define NCE_MULTIPLE_B_WORDS_ON_ONE_LINE 103
#define NCE_MULTIPLE_C_WORDS_ON_ONE_LINE 104
#define NCE_MULTIPLE_D_WORDS_ON_ONE_LINE 105
#define NCE_MULTIPLE_F_WORDS_ON_ONE_LINE 106
#define NCE_MULTIPLE_H_WORDS_ON_ONE_LINE 107
#define NCE_MULTIPLE_I_WORDS_ON_ONE_LINE 108
#define NCE_MULTIPLE_J_WORDS_ON_ONE_LINE 109
#define NCE_MULTIPLE_K_WORDS_ON_ONE_LINE 110
#define NCE_MULTIPLE_L_WORDS_ON_ONE_LINE 111
#define NCE_MULTIPLE_P_WORDS_ON_ONE_LINE 112
#define NCE_MULTIPLE_Q_WORDS_ON_ONE_LINE 113
#define NCE_MULTIPLE_R_WORDS_ON_ONE_LINE 114
#define NCE_MULTIPLE_S_WORDS_ON_ONE_LINE 115
#define NCE_MULTIPLE_T_WORDS_ON_ONE_LINE 116
#define NCE_MULTIPLE_X_WORDS_ON_ONE_LINE 117
#define NCE_MULTIPLE_Y_WORDS_ON_ONE_LINE 118
#define NCE_MULTIPLE_Z_WORDS_ON_ONE_LINE 119
#define NCE_MUST_USE_G0_OR_G1_WITH_G53 120
#define NCE_NEGATIVE_ARGUMENT_TO_SQRT 121
#define NCE_NEGATIVE_D_WORD_TOOL_RADIUS_INDEX_USED 122
#define NCE_NEGATIVE_F_WORD_USED 123
#define NCE_NEGATIVE_G_CODE_USED 124
#define NCE_NEGATIVE_H_WORD_USED 125
#define NCE_NEGATIVE_L_WORD_USED 126
#define NCE_NEGATIVE_M_CODE_USED 127
#define NCE_NEGATIVE_OR_ZERO_Q_VALUE_USED 128
#define NCE_NEGATIVE_P_WORD_USED 129
#define NCE_NEGATIVE_SPINDLE_SPEED_USED 130
#define NCE_NEGATIVE_TOOL_ID_USED 131
#define NCE_NESTED_COMMENT_FOUND 132
#define NCE_NO_CHARACTERS_FOUND_IN_READING_REAL_VALUE 133
#define NCE_NO_DIGITS_FOUND_WHERE_REAL_NUMBER_SHOULD_BE 134
#define NCE_NON_INTEGER_VALUE_FOR_INTEGER 135
#define NCE_NULL_MISSING_AFTER_NEWLINE 136
#define NCE_OFFSET_INDEX_MISSING 137
#define NCE_P_VALUE_NOT_AN_INTEGER_WITH_G10_L2 138
#define NCE_P_VALUE_OUT_OF_RANGE_WITH_G10_L2 139
#define NCE_P_WORD_WITH_NO_G4_G10_G64_G76_G82_G86_G88_G89 140
#define NCE_PARAMETER_FILE_OUT_OF_ORDER 141
#define NCE_PARAMETER_NUMBER_OUT_OF_RANGE 142
#define NCE_Q_WORD_MISSING_WITH_G83 143
#define NCE_Q_WORD_WITH_NO_G83_OR_M66 144
#define NCE_QUEUE_IS_NOT_EMPTY_AFTER_PROBING 145
#define NCE_R_CLEARANCE_PLANE_UNSPECIFIED_IN_CYCLE 146
#define NCE_R_I_J_K_WORDS_ALL_MISSING_FOR_ARC 147
#define NCE_R_LESS_THAN_X_IN_CYCLE_IN_YZ_PLANE 148
#define NCE_R_LESS_THAN_Y_IN_CYCLE_IN_XZ_PLANE 149
#define NCE_R_LESS_THAN_Z_IN_CYCLE_IN_XY_PLANE 150
#define NCE_R_WORD_WITH_NO_G_CODE_THAT_USES_IT 151
#define NCE_RADIUS_TO_END_OF_ARC_DIFFERS_FROM_RADIUS_TO_START 152
#define NCE_RADIUS_TOO_SMALL_TO_REACH_END_POINT 153
#define NCE_REQUIRED_PARAMETER_MISSING 154
#define NCE_SELECTED_TOOL_SLOT_NUMBER_TOO_LARGE 155
#define NCE_SLASH_MISSING_AFTER_FIRST_ATAN_ARGUMENT 156
#define NCE_SPINDLE_NOT_TURNING_CLOCKWISE_IN_G84 157
#define NCE_SPINDLE_NOT_TURNING_IN_G86 158
#define NCE_SPINDLE_NOT_TURNING_IN_G87 159
#define NCE_SPINDLE_NOT_TURNING_IN_G88 160
#define NCE_SSCANF_FAILED 161
#define NCE_START_POINT_TOO_CLOSE_TO_PROBE_POINT 162
#define NCE_TOO_MANY_M_CODES_ON_LINE 163
#define NCE_TOOL_LENGTH_OFFSET_INDEX_TOO_BIG 164
#define NCE_TOOL_MAX_TOO_LARGE 165
#define NCE_TOOL_RADIUS_INDEX_TOO_BIG 166
#define NCE_TOOL_RADIUS_NOT_LESS_THAN_ARC_RADIUS_WITH_COMP 167
#define NCE_TWO_G_CODES_USED_FROM_SAME_MODAL_GROUP 168
#define NCE_TWO_M_CODES_USED_FROM_SAME_MODAL_GROUP 169
#define NCE_UNABLE_TO_OPEN_FILE 170
#define NCE_UNCLOSED_COMMENT_FOUND 171
#define NCE_UNCLOSED_EXPRESSION 172
#define NCE_UNKNOWN_G_CODE_USED 173
#define NCE_UNKNOWN_M_CODE_USED 174
#define NCE_UNKNOWN_OPERATION 175
#define NCE_UNKNOWN_OPERATION_NAME_STARTING_WITH_A 176
#define NCE_UNKNOWN_OPERATION_NAME_STARTING_WITH_M 177
#define NCE_UNKNOWN_OPERATION_NAME_STARTING_WITH_O 178
#define NCE_UNKNOWN_OPERATION_NAME_STARTING_WITH_X 179
#define NCE_UNKNOWN_WORD_STARTING_WITH_A 180
#define NCE_UNKNOWN_WORD_STARTING_WITH_C 181
#define NCE_UNKNOWN_WORD_STARTING_WITH_E 182
#define NCE_UNKNOWN_WORD_STARTING_WITH_F 183
#define NCE_UNKNOWN_WORD_STARTING_WITH_L 184
#define NCE_UNKNOWN_WORD_STARTING_WITH_R 185
#define NCE_UNKNOWN_WORD_STARTING_WITH_S 186
#define NCE_UNKNOWN_WORD_STARTING_WITH_T 187
#define NCE_UNKNOWN_WORD_WHERE_UNARY_OPERATION_COULD_BE 188
#define NCE_X_AND_Y_WORDS_MISSING_FOR_ARC_IN_XY_PLANE 189
#define NCE_X_AND_Z_WORDS_MISSING_FOR_ARC_IN_XZ_PLANE 190
#define NCE_X_VALUE_UNSPECIFIED_IN_YZ_PLANE_CANNED_CYCLE 191
#define NCE_X_Y_Z_A_B_C_U_V_AND_W_WORDS_ALL_MISSING_WITH_G38_2 192
#define NCE_Y_AND_Z_WORDS_MISSING_FOR_ARC_IN_YZ_PLANE 193
#define NCE_Y_VALUE_UNSPECIFIED_IN_XZ_PLANE_CANNED_CYCLE 194
#define NCE_Z_VALUE_UNSPECIFIED_IN_XY_PLANE_CANNED_CYCLE 195
#define NCE_ZERO_OR_NEGATIVE_ARGUMENT_TO_LN 196
#define NCE_ZERO_RADIUS_ARC 197
#define NCE_K_WORD_MISSING_WITH_G33 198
#define NCE_F_WORD_USED_WITH_G33 199
#define NCE_G33_NOT_SUPPORTED 200
#define NCE_CANNED_CYCLES_NOT_SUPPORTED 201

#define NCE_UNKNOWN_OPERATION_NAME_STARTING_WITH_E 202
#define NCE_UNKNOWN_OPERATION_NAME_STARTING_WITH_N 203
#define NCE_UNKNOWN_OPERATION_NAME_STARTING_WITH_G 204
#define NCE_UNKNOWN_OPERATION_NAME_STARTING_WITH_L 205
#define NCE_TOO_MANY_SUBROUTINE_PARAMETERS 206
#define NCE_TOO_MANY_SUBROUTINE_LEVELS 207
#define NCE_UNKNOWN_COMMAND_IN_O_LINE 208
#define NCE_TOO_MANY_OWORD_LABELS 209
#define NCE_UNKNOWN_OWORD_NUMBER 210
#define NCE_NESTED_SUBROUTINE_DEFN 211
#define NCE_NOT_IN_SUBROUTINE_DEFN 212
#define NCE_RETURN_OUTSIDE_OF_SUBROUTINE 213
#define NCE_FILE_NOT_OPEN 214
#define NCE_TXX_MISSING_FOR_M6 215
#define NCE_CANNOT_CHANGE_PLANES_WITH_CUTTER_RADIUS_COMP_ON 216
#define NCE_RADIUS_COMP_ONLY_IN_XY_OR_XZ 217

#define NCE_P_WORD_MISSING_WITH_G76 218
#define NCE_I_J_OR_K_WORDS_MISSING_WITH_G76 219
#define NCE_CANNOT_MOVE_ROTARY_AXES_WITH_G76 220

#define NCE_MULTIPLE_E_WORDS_ON_ONE_LINE 221
#define NCE_E_WORD_WITH_NO_G76_OR_M66_TO_USE_IT 222

#define NCE_NAMED_PARAMETER_NOT_TERMINATED 223
#define NCE_NAMED_PARAMETER_NOT_DEFINED 224
#define NCE_NAMED_OWORD_NOT_TERMINATED 225
#define NCE_NAMED_OWORD_NOT_DEFINED 226

#define NCE_OUT_OF_MEMORY 227
#define NCE_VARIABLE 228

#define NCE_XYZABCJ_WORDS_NOT_ALLOWED_WITH_G43H_1_G41R_OR_G42R 229

#define NCE_S_WORD_MISSING_WITH_G96 230

#define NCE_QUEUE_IS_NOT_EMPTY_AFTER_INPUT 231
#define NCE_ANALOG_INPUT_WITH_WAIT_NOT_IMMEDIATE 232
#define NCE_ZERO_TIMEOUT_WITH_WAIT_NOT_IMMEDIATE 233
#define NCE_BOTH_DIGITAL_AND_ANALOG_INPUT_SELECTED 234
#define NCE_INVALID_OR_MISSING_P_AND_E_WORDS_FOR_WAIT_INPUT 235

#define RS274NGC_MAX_ERROR 236

#endif /* RS274NGC_RETURN_H */
