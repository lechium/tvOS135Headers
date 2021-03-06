/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class BKSHIDEventDeferringEnvironment, BKSHIDEventDeferringToken, NSSet, NSString;

@interface BKSHIDEventKeyCommandsRegistration : NSObject <NSSecureCoding, BSDescriptionProviding, NSCopying, NSMutableCopying> {

	BKSHIDEventDeferringEnvironment* _environment;
	BKSHIDEventDeferringToken* _token;
	NSSet* _keyCommands;

}

@property (nonatomic,copy,readonly) BKSHIDEventDeferringEnvironment * deferringEnvironment;              //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy,readonly) BKSHIDEventDeferringToken * deferringToken;                          //@synthesize token=_token - In the implementation block
@property (nonatomic,copy,readonly) NSSet * keyCommands;                                                 //@synthesize keyCommands=_keyCommands - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(BKSHIDEventDeferringEnvironment *)deferringEnvironment;
-(BKSHIDEventDeferringToken *)deferringToken;
-(id)_initWithEnvironment:(id)arg1 token:(id)arg2 keyCommands:(id)arg3 ;
-(NSSet *)keyCommands;
@end

