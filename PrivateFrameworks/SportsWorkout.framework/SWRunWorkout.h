/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class SWRunSensor, SWPaceModel;

@interface SWRunWorkout : SWWorkout {
    BOOL _hasStarted;
    BOOL _isCalibration;
    SWPaceModel *_paceModel;
    SWRunSensor *_sensor;
    float _weightInLbs;
}

@property(copy) NSData *paceModelParameters;
@property(readonly) SWRunSensor *sensor;
@property(readonly) BOOL canBeUsedForRunCalibration;
@property(readonly) BOOL canBeUsedForWalkCalibration;
@property BOOL isCalibration;
@property(readonly) BOOL isWalk;
@property(readonly) float maximumCalibrationDistanceMiles;
@property(readonly) float minimumCalibrationDistanceMiles;
@property float weightInLbs;

+ (id)workoutWithSensor:(id)arg1;

- (void)activateWorkout;
- (BOOL)calibrateWithDistanceMiles:(float)arg1 forWalk:(BOOL)arg2;
- (BOOL)canBeUsedForRunCalibration;
- (BOOL)canBeUsedForWalkCalibration;
- (void)dealloc;
- (id)initWithSensor:(id)arg1;
- (BOOL)isCalibration;
- (BOOL)isWalk;
- (float)maximumCalibrationDistanceMiles;
- (float)minimumCalibrationDistanceMiles;
- (id)paceModelParameters;
- (void)pauseWorkout;
- (BOOL)recalibrateWithAdjustedDistanceMiles:(float)arg1;
- (void)resetCalibration;
- (void)sensor:(id)arg1 didReceivePacketPayload:(const char *)arg2 timestamp:(unsigned long)arg3;
- (id)sensor;
- (void)setIsCalibration:(BOOL)arg1;
- (void)setPaceModelParameters:(id)arg1;
- (void)setWeightInLbs:(float)arg1;
- (float)weightInLbs;
- (id)workoutData;

@end
