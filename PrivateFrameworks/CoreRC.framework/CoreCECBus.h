/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreCECBus : CoreRCBus {
    BOOL  _hasLink;
    union CECOSDName { 
        unsigned char bytes[15]; 
        struct { 
            unsigned char length; 
            unsigned char characters[14]; 
        } string; 
    }  _osdNameASCII;
    unsigned int  _physicalAddress;
    unsigned int  _systemAudioModeStatus;
    struct CECLanguage { 
        unsigned char characters[3]; 
    }  _tvLanguageCodeASCII;
}

@property (nonatomic, readonly) CoreCECDevice *activeSource;
@property (nonatomic) BOOL hasLink;
@property (nonatomic, readonly) NSString *osdName;
@property (nonatomic) union CECOSDName { unsigned char x1[15]; struct { unsigned char x_2_1_1; unsigned char x_2_1_2[14]; } x2; } osdNameASCII;
@property (nonatomic) unsigned int physicalAddress;
@property (nonatomic, readonly) CoreCECPhysicalDevice *rootPhysicalDevice;
@property (nonatomic) unsigned int systemAudioModeStatus;
@property (nonatomic, readonly) NSString *tvLanguageCode;
@property (nonatomic) struct CECLanguage { unsigned char x1[3]; } tvLanguageCodeASCII;

+ (BOOL)supportsSecureCoding;

- (id)activeSource;
- (id)addDeviceWithType:(unsigned int)arg1 error:(id*)arg2;
- (id)delegate;
- (id)description;
- (id)deviceOnBusWithLogicalAddress:(unsigned char)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasLink;
- (id)init;
- (id)initWithBus:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhysicalAddress:(unsigned int)arg1;
- (void)notifyDelegateActiveSourceChangedFrom:(id)arg1 newActiveSource:(id)arg2;
- (void)notifyDelegateLinkStateUpdated;
- (id)osdName;
- (union CECOSDName { unsigned char x1[15]; struct { unsigned char x_2_1_1; unsigned char x_2_1_2[14]; } x2; })osdNameASCII;
- (unsigned int)physicalAddress;
- (id)rootPhysicalDevice;
- (void)setDelegate:(id)arg1;
- (void)setHasLink:(BOOL)arg1;
- (BOOL)setOSDName:(id)arg1 error:(id*)arg2;
- (void)setOsdNameASCII:(union CECOSDName { unsigned char x1[15]; struct { unsigned char x_2_1_1; unsigned char x_2_1_2[14]; } x2; })arg1;
- (void)setPhysicalAddress:(unsigned int)arg1;
- (void)setSystemAudioModeStatus:(unsigned int)arg1;
- (BOOL)setTvLanguageCode:(id)arg1 error:(id*)arg2;
- (void)setTvLanguageCodeASCII:(struct CECLanguage { unsigned char x1[3]; })arg1;
- (unsigned int)systemAudioModeStatus;
- (id)tvLanguageCode;
- (struct CECLanguage { unsigned char x1[3]; })tvLanguageCodeASCII;

@end