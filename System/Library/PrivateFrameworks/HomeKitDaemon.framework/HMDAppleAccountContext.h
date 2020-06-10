/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFObject.h>

@class NSString, NSArray;

@interface HMDAppleAccountContext : HMFObject <HMFObject> {

	NSString* _identifier;
	NSString* _username;
	NSString* _alternateDSID;

}

@property (copy,readonly) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * username;                                    //@synthesize username=_username - In the implementation block
@property (copy,readonly) NSString * alternateDSID;                               //@synthesize alternateDSID=_alternateDSID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(NSString *)identifier;
-(NSString *)username;
-(id)initWithAccount:(id)arg1 ;
-(NSString *)alternateDSID;
-(NSArray *)attributeDescriptions;
@end

