/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMAccelerometerData : CMLogItem {
    id _internal;
}

@property(readonly) ? acceleration;

- (struct { double x1; double x2; double x3; })acceleration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithClientAcceleration:(struct { double x1; double x2; double x3; double x4; })arg1;
- (id)initWithCoder:(id)arg1;

@end
