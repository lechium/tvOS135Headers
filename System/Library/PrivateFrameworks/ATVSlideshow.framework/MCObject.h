/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MCObjectBase.h>

@class MCMontage, NSString;

@interface MCObject : MCObjectBase {

	MCMontage* mMontage;
	NSString* mObjectID;

}

@property (nonatomic,readonly) NSString * objectID; 
@property (nonatomic,readonly) MCMontage * montage; 
+(id)objectWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(void)dealloc;
-(void)finalize;
-(NSString *)objectID;
-(id)snapshot;
-(BOOL)isSnapshot;
-(MCMontage *)montage;
-(void)demolish;
-(id)initFromScratchWithMontage:(id)arg1 ;
-(id)imprint;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(id)initSnapshot;
@end
