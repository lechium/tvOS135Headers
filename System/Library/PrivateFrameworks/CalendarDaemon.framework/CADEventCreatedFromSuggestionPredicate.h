/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/EKPredicate.h>
#import <libobjc.A.dylib/EKDefaultPropertiesLoading.h>

@class NSString;

@interface CADEventCreatedFromSuggestionPredicate : EKPredicate <EKDefaultPropertiesLoading> {

	NSString* _opaqueKey;
	NSString* _extractionGroupIdentifier;

}

@property (nonatomic,readonly) NSString * opaqueKey;                              //@synthesize opaqueKey=_opaqueKey - In the implementation block
@property (nonatomic,readonly) NSString * extractionGroupIdentifier;              //@synthesize extractionGroupIdentifier=_extractionGroupIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)predicateFormat;
-(BOOL)shouldLoadDefaultProperties;
-(id)defaultPropertiesToLoad;
-(id)copyMatchingItemsWithDatabase:(CalDatabase*)arg1 ;
-(id)initWithOpaqueKey:(id)arg1 extractionGroupIdentifier:(id)arg2 ;
-(NSString *)opaqueKey;
-(NSString *)extractionGroupIdentifier;
-(id)initWithExtractionGroupIdentifier:(id)arg1 ;
-(id)initWithOpaqueKey:(id)arg1 ;
@end
