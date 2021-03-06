// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

// We use BrownConrady for the depth camera and color camera.
static char g_test_json[] = "{\
 \"CalibrationInformation\": { \
    \"Cameras\": [ \
      { \
        \"Intrinsics\": { \
          \"ModelParameterCount\": 14, \
          \"ModelParameters\": [ \
            0.50218582153320313, \
            0.50179535150527954, \
            0.49281969666481018, \
            0.49292713403701782, \
            0.58251643180847168, \
            0.0061361165717244148, \
            -0.0013186802389100194, \
            0.92561346292495728, \
            0.12568977475166321, \
            -0.0065302476286888123, \
            0, \
            0, \
            -0.000020833556845900603, \
            -0.00012877916742581874 \
          ], \
          \"ModelType\": \"CALIBRATION_LensDistortionModelBrownConrady\" \
        }, \
        \"Location\": \"CALIBRATION_CameraLocationD0\", \
        \"Purpose\": \"CALIBRATION_CameraPurposeDepth\", \
        \"MetricRadius\": 1.737323045730591, \
        \"Rt\": { \
          \"Rotation\": [ \
            1, \
            0, \
            0, \
            0, \
            1, \
            0, \
            0, \
            0, \
            1 \
          ], \
          \"Translation\": [ \
            0, \
            0, \
            0 \
          ] \
        }, \
        \"SensorHeight\": 1024, \
        \"SensorWidth\": 1024, \
        \"Shutter\": \"CALIBRATION_ShutterTypeUndefined\", \
        \"ThermalAdjustmentParams\": { \
          \"Params\": [ \
            0, \
            0, \
            0, \
            0, \
            0, \
            0, \
            0, \
            0, \
            0, \
            0, \
            0, \
            0 \
          ] \
        } \
      }, \
      { \
        \"Intrinsics\": { \
          \"ModelParameterCount\": 14, \
          \"ModelParameters\": [ \
            0.49626153707504272, \
            0.50453948974609375, \
            0.48109495639801025, \
            0.85502892732620239, \
            -1.05756676197052, \
            -1.3993426561355591, \
            1.7508856058120728, \
            -1.1485179662704468, \
            -1.1924415826797485, \
            1.6220585107803345, \
            0, \
            0, \
            -0.000012259531104064081, \
            0.00069101608823984861 \
          ], \
          \"ModelType\": \"CALIBRATION_LensDistortionModelBrownConrady\" \
        }, \
        \"Location\": \"CALIBRATION_CameraLocationPV0\", \
        \"Purpose\": \"CALIBRATION_CameraPurposePhotoVideo\", \
        \"MetricRadius\": 0.65614030566253234, \
        \"Rt\": { \
          \"Rotation\": [ \
            0.99999475479125977, \
            0.000089527980890125036, \
            -0.0032330064568668604, \
            0.0001289974752580747, \
            0.99771732091903687, \
            0.0675286054611206, \
            0.00323167210444808, \
            -0.067528672516345978, \
            0.99771207571029663 \
          ], \
          \"Translation\": [ \
            -0.031942266970872879, \
            -0.0024762286338955164, \
            0.0036488529294729233 \
          ] \
        }, \
        \"SensorHeight\": 2160, \
        \"SensorWidth\": 3840, \
        \"Shutter\": \"CALIBRATION_ShutterTypeUndefined\", \
        \"ThermalAdjustmentParams\": { \
          \"Params\": [ \
            0, \
            0, \
            0, \
            0, \
            0, \
            0, \
            0, \
            0, \
            0, \
            0, \
            0, \
            0 \
          ] \
        } \
      } \
    ], \
       \"InertialSensors\": [\
           {\
               \"BiasTemperatureModel\": [\
                   -0.035886555910110474,\
                   0,\
                   0,\
                   0,\
                   0.018185537308454514,\
                   0,\
                   0,\
                   0,\
                   -0.0170263834297657,\
                   0,\
                   0,\
                   0\
               ],\
               \"BiasUncertainty\": [\
                   9.999999747378752e-05,\
                   9.999999747378752e-05,\
                   9.999999747378752e-05\
               ],\
               \"Id\": \"CALIBRATION_InertialSensorId_LSM6DSM\",\
               \"MixingMatrixTemperatureModel\": [\
                   1.0006208419799805,\
                   0,\
                   0,\
                   0,\
                   0.000861089036334306,\
                   0,\
                   0,\
                   0,\
                   0.006612793542444706,\
                   0,\
                   0,\
                   0,\
                   0.0008673131815157831,\
                   0,\
                   0,\
                   0,\
                   0.9934653043746948,\
                   0,\
                   0,\
                   0,\
                   -0.00831980723887682,\
                   0,\
                   0,\
                   0,\
                   0.006603339221328497,\
                   0,\
                   0,\
                   0,\
                   -0.008248291909694672,\
                   0,\
                   0,\
                   0,\
                   1.0021218061447144,\
                   0,\
                   0,\
                   0\
               ],\
               \"ModelTypeMask\": 16,\
               \"Noise\": [\
                   0.0009500000160187483,\
                   0.0009500000160187483,\
                   0.0009500000160187483,\
                   0,\
                   0,\
                   0\
               ],\
               \"Rt\": {\
                   \"Rotation\": [\
                       0.006215147208422422,\
                       0.112122543156147,\
                       -0.9936749339103699,\
                       -0.9999266862869263,\
                       -0.009632264263927937,\
                       -0.007341118063777685,\
                       -0.010394444689154625,\
                       0.9936476945877075,\
                       0.11205445230007172\
                   ],\
                   \"Translation\": [\
                       0,\
                       0,\
                       0\
                   ]\
               },\
               \"SecondOrderScaling\": [\
                   0,\
                   0,\
                   0,\
                   0,\
                   0,\
                   0,\
                   0,\
                   0,\
                   0\
               ],\
               \"SensorType\": \"CALIBRATION_InertialSensorType_Gyro\",\
               \"TemperatureBounds\": [\
                   5,\
                   60\
               ],\
               \"TemperatureC\": 0\
           },\
           {\
               \"BiasTemperatureModel\": [\
                   -0.04158460721373558,\
                   0,\
                   0,\
                   0,\
                   -0.0007273331866599619,\
                   0,\
                   0,\
                   0,\
                   -0.08497647196054459,\
                   0,\
                   0,\
                   0\
               ],\
               \"BiasUncertainty\": [\
                   0.009999999776482582,\
                   0.009999999776482582,\
                   0.009999999776482582\
               ],\
               \"Id\": \"CALIBRATION_InertialSensorId_LSM6DSM\",\
               \"MixingMatrixTemperatureModel\": [\
                   1.0162577629089355,\
                   0,\
                   0,\
                   0,\
                   -0.0003413598460610956,\
                   0,\
                   0,\
                   0,\
                   -0.0005690594553016126,\
                   0,\
                   0,\
                   0,\
                   -0.0003392015059944242,\
                   0,\
                   0,\
                   0,\
                   1.022727608680725,\
                   0,\
                   0,\
                   0,\
                   0.0019331017974764109,\
                   0,\
                   0,\
                   0,\
                   -0.0005674033891409636,\
                   0,\
                   0,\
                   0,\
                   0.0019397408468648791,\
                   0,\
                   0,\
                   0,\
                   1.019227385520935,\
                   0,\
                   0,\
                   0\
               ],\
               \"ModelTypeMask\": 56,\
               \"Noise\": [\
                   0.010700000450015068,\
                   0.010700000450015068,\
                   0.010700000450015068,\
                   0,\
                   0,\
                   0\
               ],\
               \"Rt\": {\
                   \"Rotation\": [\
                       0.0003031194501090795,\
                       0.1085868701338768,\
                       -0.9940869212150574,\
                       -0.9999820590019226,\
                       -0.005916988011449575,\
                       -0.000951246009208262,\
                       -0.005985293071717024,\
                       0.9940693378448486,\
                       0.10858312249183655\
                   ],\
                   \"Translation\": [\
                       -0.05079442635178566,\
                       0.0034077665768563747,\
                       0.0014520891709253192\
                   ]\
               },\
               \"SecondOrderScaling\": [\
                   0,\
                   0,\
                   0,\
                   0,\
                   0,\
                   0,\
                   0,\
                   0,\
                   0\
               ],\
               \"SensorType\": \"CALIBRATION_InertialSensorType_Accelerometer\",\
               \"TemperatureBounds\": [\
                   5,\
                   60\
               ],\
               \"TemperatureC\": 0\
           }\
       ],\
       \"Metadata\": {\
           \"SerialId\": \"000019484312\",\
           \"FactoryCalDate\": \"10/27/2018 9:08:36 AM GMT\",\
           \"Version\": {\
               \"Major\": 1,\
               \"Minor\": 2\
           },\
           \"DeviceName\": \"Eden-EV2\",\
           \"Notes\": \"PV0_max_radius_invalid\"\
       }\
   }\
}";
