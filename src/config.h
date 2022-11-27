#pragma once

// Autonomous configuration
#define DO_DYE_COLLECTION false

#define PRINT_DATA true

#define ENABLE_IK_ACTUATION 1

// 0 disables sleep
#define SLEEP_TIME_MINUTES 0
#define SLEEP_PRINT_INTERVAL 5000

#define SERIAL_MQTT_BUFFER_SIZE 1024
#define SERIAL_MQTT_SEND_PREFIX "mega/"

#define E_STOP_PIN 27

// Used with logic analyser
#define STEP_INDICATOR_PIN 29

// temporarily using relays
#define LIGHT_TOGGLE 41//29
#define LIGHT_MODE 39//31
#define LIGHT_RGB 33
#define LIGHT_BUTTON_WAIT_MS 100

#define V5_RELAY_PIN 25

#define MILK_VALVE_RELAY 53
#define WATER_VALVE_RELAY 51
#define AIR_VALVE_RELAY 49
#define DRAINAGE_VALVE_RELAY 47
#define V12_RELAY_PIN1 45
#define V12_RELAY_PIN2 43

#define STEPS_PER_STEPPER_REVOLUTION 200
#define STEPPER_SLEEP 35

#define PITCH_STEPPER_STEP 30
#define PITCH_STEPPER_DIR 32
#define YAW_STEPPER_STEP 34
#define YAW_STEPPER_DIR 36
#define Z_STEPPER_STEP 38
#define Z_STEPPER_DIR 40

#define RING_STEPPER_STEP 42
#define RING_STEPPER_DIR 44
#define PIPETTE_STEPPER_STEP 46
#define PIPETTE_STEPPER_DIR 48
#define BOWL_STEPPER_STEP 50
#define BOWL_STEPPER_DIR 52

#define DRAINAGE_SERVO 5
#define DRAINAGE_REST_ANGLE 0
#define DRAINAGE_CONTACT_ANGLE 47

#define CAMERA_SERVO_PIN 6
#define CAMERA_OFF_ANGLE 109
#define CAMERA_ON_ANGLE 129

#define CONTROLLER_PPM 2
#define PPM_CHANNELS 6

// User control
#define BUTTON_A A8
#define SWITCH_A A5
#define SWITCH_B A2

// Limit switches
#define PITCH_LIMIT_SWITCH A0
#define YAW_LIMIT_SWITCH A1
#define Z_LIMIT_SWITCH A3
#define RING_LIMIT_SWITCH A4
#define PIPETTE_LIMIT_SWITCH A6
#define BOWL_LIMIT_SWITCH A7

// Current measuring
#define V12_CURRENT A14
#define V5_CURRENT A15