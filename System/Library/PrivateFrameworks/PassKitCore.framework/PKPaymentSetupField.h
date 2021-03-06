/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObjectNSCopying;
@class NSString, NSDictionary;

@interface PKPaymentSetupField : NSObject {

	id<NSObject><NSCopying> _currentValue;
	id<NSObject><NSCopying> _originalCameraCaptureValue;
	BOOL _optional;
	BOOL _currentValueFromCameraCapture;
	BOOL _requiresSecureSubmission;
	NSString* _identifier;
	NSString* _localizedDisplayName;
	NSString* _displayFormat;
	NSString* _defaultValue;
	NSString* _submissionKey;
	NSString* _submissionDestination;
	NSString* _localizedPlaceholder;
	NSDictionary* _rawConfigurationDictionary;

}

@property (nonatomic,copy) NSString * localizedPlaceholder;                                                          //@synthesize localizedPlaceholder=_localizedPlaceholder - In the implementation block
@property (nonatomic,copy) NSString * displayFormat;                                                                 //@synthesize displayFormat=_displayFormat - In the implementation block
@property (assign,getter=isOptional,nonatomic) BOOL optional;                                                        //@synthesize optional=_optional - In the implementation block
@property (nonatomic,copy) NSString * submissionKey;                                                                 //@synthesize submissionKey=_submissionKey - In the implementation block
@property (nonatomic,copy) NSString * submissionDestination;                                                         //@synthesize submissionDestination=_submissionDestination - In the implementation block
@property (assign,nonatomic) BOOL requiresSecureSubmission;                                                          //@synthesize requiresSecureSubmission=_requiresSecureSubmission - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * rawConfigurationDictionary;                                       //@synthesize rawConfigurationDictionary=_rawConfigurationDictionary - In the implementation block
@property (getter=isBuiltIn,nonatomic,readonly) BOOL builtIn; 
@property (nonatomic,copy) NSString * defaultValue;                                                                  //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long fieldType; 
@property (nonatomic,copy) NSString * localizedDisplayName;                                                          //@synthesize localizedDisplayName=_localizedDisplayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * compactLocalizedDisplayName; 
@property (nonatomic,copy) id<NSObject><NSCopying> currentValue;                                                     //@synthesize currentValue=_currentValue - In the implementation block
@property (nonatomic,copy) id<NSObject><NSCopying> originalCameraCaptureValue;                                       //@synthesize originalCameraCaptureValue=_originalCameraCaptureValue - In the implementation block
@property (assign,getter=isCurrentValueFromCameraCapture,nonatomic) BOOL currentValueFromCameraCapture;              //@synthesize currentValueFromCameraCapture=_currentValueFromCameraCapture - In the implementation block
+(id)paymentSetupFieldWithIdentifier:(id)arg1 configuration:(id)arg2 ;
+(Class)classForIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
+(id)paymentSetupFieldWithIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
+(id)paymentSetupFieldWithIdentifier:(id)arg1 ;
+(id)newRandomlyGeneratedField;
+(id)sampleCustomPaymentSetupFields;
-(id)init;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setDefaultValue:(NSString *)arg1 ;
-(NSString *)defaultValue;
-(NSString *)localizedDisplayName;
-(void)setLocalizedDisplayName:(NSString *)arg1 ;
-(BOOL)isOptional;
-(void)setOptional:(BOOL)arg1 ;
-(id<NSObject><NSCopying>)currentValue;
-(id)displayString;
-(void)setCurrentValue:(id<NSObject><NSCopying>)arg1 ;
-(NSString *)localizedPlaceholder;
-(id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
-(void)updateWithConfiguration:(id)arg1 ;
-(BOOL)isBuiltIn;
-(id)initWithIdentifier:(id)arg1 configuration:(id)arg2 ;
-(void)setSubmissionKey:(NSString *)arg1 ;
-(void)setSubmissionDestination:(NSString *)arg1 ;
-(void)_setLocalizedDisplayName:(id)arg1 ;
-(void)setLocalizedPlaceholder:(NSString *)arg1 ;
-(void)setDisplayFormat:(NSString *)arg1 ;
-(BOOL)isFieldTypeLabel;
-(void)setRequiresSecureSubmission:(BOOL)arg1 ;
-(unsigned long long)fieldType;
-(BOOL)isFieldTypeText;
-(BOOL)isFieldTypeDate;
-(BOOL)isFieldTypeFooter;
-(BOOL)isFieldTypePicker;
-(id)_submissionStringForValue:(id)arg1 ;
-(void)noteCurrentValueChanged;
-(id)textFieldObject;
-(id)dateFieldObject;
-(id)labelFieldObject;
-(id)footerFieldObject;
-(id)pickerFieldObject;
-(NSString *)compactLocalizedDisplayName;
-(id)submissionString;
-(BOOL)submissionStringMeetsAllRequirements;
-(void)setOriginalCameraCaptureValue:(id<NSObject><NSCopying>)arg1 ;
-(void)setCurrentValueFromCameraCapture:(BOOL)arg1 ;
-(NSString *)displayFormat;
-(id<NSObject><NSCopying>)originalCameraCaptureValue;
-(BOOL)isCurrentValueFromCameraCapture;
-(NSString *)submissionKey;
-(NSString *)submissionDestination;
-(BOOL)requiresSecureSubmission;
-(NSDictionary *)rawConfigurationDictionary;
@end

