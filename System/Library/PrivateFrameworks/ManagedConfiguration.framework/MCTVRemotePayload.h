/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCTVRemotePayload : MCPayload {

	NSArray* _allowedTVs;
	NSArray* _allowedRemotes;

}

@property (nonatomic,retain) NSArray * allowedTVs;                  //@synthesize allowedTVs=_allowedTVs - In the implementation block
@property (nonatomic,retain) NSArray * allowedRemotes;              //@synthesize allowedRemotes=_allowedRemotes - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)description;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)restrictions;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(void)setAllowedRemotes:(NSArray *)arg1 ;
-(void)setAllowedTVs:(NSArray *)arg1 ;
-(NSArray *)allowedRemotes;
-(NSArray *)allowedTVs;
@end

