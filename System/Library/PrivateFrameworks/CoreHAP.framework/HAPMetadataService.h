/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString, NSNumber, NSArray, NSSet;

@interface HAPMetadataService : HMFObject {

	BOOL _allowAssociatedService;
	NSString* _name;
	NSString* _svcDescription;
	NSString* _uuidStr;
	NSString* _btleuuidStr;
	NSNumber* _properties;
	NSArray* _linkedServices;
	NSSet* _mandatoryCharacteristics;
	NSSet* _optionalCharacteristics;

}

@property (nonatomic,retain) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * svcDescription;                     //@synthesize svcDescription=_svcDescription - In the implementation block
@property (nonatomic,retain) NSString * uuidStr;                            //@synthesize uuidStr=_uuidStr - In the implementation block
@property (nonatomic,retain) NSString * btleuuidStr;                        //@synthesize btleuuidStr=_btleuuidStr - In the implementation block
@property (nonatomic,retain) NSNumber * properties;                         //@synthesize properties=_properties - In the implementation block
@property (nonatomic,retain) NSArray * linkedServices;                      //@synthesize linkedServices=_linkedServices - In the implementation block
@property (nonatomic,retain) NSSet * mandatoryCharacteristics;              //@synthesize mandatoryCharacteristics=_mandatoryCharacteristics - In the implementation block
@property (nonatomic,retain) NSSet * optionalCharacteristics;               //@synthesize optionalCharacteristics=_optionalCharacteristics - In the implementation block
@property (assign,nonatomic) BOOL allowAssociatedService;                   //@synthesize allowAssociatedService=_allowAssociatedService - In the implementation block
-(NSString *)name;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSNumber *)properties;
-(void)dump;
-(void)setProperties:(NSNumber *)arg1 ;
-(NSString *)svcDescription;
-(void)setSvcDescription:(NSString *)arg1 ;
-(NSArray *)linkedServices;
-(void)setLinkedServices:(NSArray *)arg1 ;
-(NSString *)uuidStr;
-(void)setUuidStr:(NSString *)arg1 ;
-(NSString *)btleuuidStr;
-(NSSet *)mandatoryCharacteristics;
-(BOOL)allowAssociatedService;
-(NSSet *)optionalCharacteristics;
-(id)initWithName:(id)arg1 uuid:(id)arg2 description:(id)arg3 mandatoryChrTypes:(id)arg4 properties:(id)arg5 linkedServices:(id)arg6 ;
-(id)generateDictionary:(id)arg1 metadata:(id)arg2 ;
-(void)setBtleuuidStr:(NSString *)arg1 ;
-(void)setMandatoryCharacteristics:(NSSet *)arg1 ;
-(void)setOptionalCharacteristics:(NSSet *)arg1 ;
-(void)setAllowAssociatedService:(BOOL)arg1 ;
@end

