#pragma once

// Basic Stepper calibration

// multiplier for stepper speeds and accelerations. Useful for cautious testing.
#define SPEED_MULT 1

// ul of air to draw in from 0 position before taking in liquid
#define PIPETTE_BUFFER 100

// Physical calibration of arm positions etc
#define STAGE_RADIUS_MM 75.0
#define ARM_PATH_RADIUS_MM 164.7

#define YAW_ZERO_OFFSET -22.3
#define RING_ZERO_OFFSET 23.8

#define CENTRE_PITCH 48.95
#define MIN_BOWL_Z 32.5

// NODE CALIBRATION (UNITS)
#define HOME_TOP_Z 73

#define VIAL_PITCH 0
#define VIAL_YAW_OFFSET 0
#define VIAL_YAW_INCREMENT 35.5

#define HANDOVER_Z 50
#define HANDOVER_PITCH 90
#define HANDOVER_INNER_YAW 15
#define HANDOVER_OUTER_YAW 55