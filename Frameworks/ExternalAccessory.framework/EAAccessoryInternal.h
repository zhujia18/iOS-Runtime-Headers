/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@class <EAAccessoryDelegate>, NSArray, NSString, NSDictionary;

@interface EAAccessoryInternal : NSObject {
    int (*_cfAccessoryPortPropertyCallback)();
    NSDictionary *_audioPorts;
    struct __CFAccessory { } *_cfAccessory;
    void *_cfAccessoryPortPropertyContext;
    NSInteger _classType;
    BOOL _connected;
    NSUInteger _connectionID;
    <EAAccessoryDelegate> *_delegate;
    NSUInteger _eqIndex;
    NSUInteger _eqItems;
    NSArray *_eqNames;
    NSString *_firmwareRevision;
    NSString *_hardwareRevision;
    NSInteger _iPodOutOptionsMask;
    NSDictionary *_legacyLingoProperties;
    NSString *_manufacturer;
    NSString *_modelNumber;
    NSString *_name;
    NSString *_preferredApp;
    NSDictionary *_protocols;
    NSString *_serialNumber;
    BOOL _supportsAccessibility;
    BOOL _supportsIPodOut;
    BOOL _supportsPublicIap;
}

@property NSDictionary *audioPorts;
@property __CFAccessory *cfAccessory;
@property unknown type *cfAccessoryPortPropertyCallback;
@property void *cfAccessoryPortPropertyContext;
@property <EAAccessoryDelegate> *delegate;
@property(retain) NSArray *eqNames;
@property(copy) NSString *firmwareRevision;
@property(copy) NSString *hardwareRevision;
@property NSDictionary *legacyLingoProperties;
@property(copy) NSString *manufacturer;
@property(copy) NSString *modelNumber;
@property(copy) NSString *name;
@property(copy) NSString *preferredApp;
@property NSDictionary *protocols;
@property(copy) NSString *serialNumber;
@property NSInteger classType;
@property BOOL connected;
@property NSUInteger connectionID;
@property NSUInteger eqIndex;
@property NSInteger iPodOutOptionsMask;
@property BOOL supportsAccessibility;
@property BOOL supportsIPodOut;
@property BOOL supportsPublicIap;

- (int (*)())cfAccessoryPortPropertyCallback;
- (id)audioPorts;
- (struct __CFAccessory { }*)cfAccessory;
- (void*)cfAccessoryPortPropertyContext;
- (NSInteger)classType;
- (BOOL)connected;
- (NSUInteger)connectionID;
- (void)dealloc;
- (id)delegate;
- (NSUInteger)eqIndex;
- (id)eqNames;
- (id)firmwareRevision;
- (id)hardwareRevision;
- (NSInteger)iPodOutOptionsMask;
- (id)init;
- (id)legacyLingoProperties;
- (id)manufacturer;
- (id)modelNumber;
- (id)name;
- (id)preferredApp;
- (id)protocols;
- (id)serialNumber;
- (void)setAudioPorts:(id)arg1;
- (void)setCfAccessory:(struct __CFAccessory { }*)arg1;
- (void)setCfAccessoryPortPropertyCallback:(int (*)())arg1;
- (void)setCfAccessoryPortPropertyContext:(void*)arg1;
- (void)setClassType:(NSInteger)arg1;
- (void)setConnected:(BOOL)arg1;
- (void)setConnectionID:(NSUInteger)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEqIndex:(NSUInteger)arg1;
- (void)setEqNames:(id)arg1;
- (void)setFirmwareRevision:(id)arg1;
- (void)setHardwareRevision:(id)arg1;
- (void)setIPodOutOptionsMask:(NSInteger)arg1;
- (void)setLegacyLingoProperties:(id)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setModelNumber:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPreferredApp:(id)arg1;
- (void)setProtocols:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setSupportsAccessibility:(BOOL)arg1;
- (void)setSupportsIPodOut:(BOOL)arg1;
- (void)setSupportsPublicIap:(BOOL)arg1;
- (BOOL)supportsAccessibility;
- (BOOL)supportsIPodOut;
- (BOOL)supportsPublicIap;

@end
