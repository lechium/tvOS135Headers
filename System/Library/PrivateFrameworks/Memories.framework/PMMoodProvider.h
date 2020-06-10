/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PMSliderProviderProtocol.h>

@protocol PMEditProviderDelegate;
@class VEKProduction, NSMutableArray, NSArray, NSString;

@interface PMMoodProvider : NSObject <PMSliderProviderProtocol> {

	VEKProduction* _production;
	id<PMEditProviderDelegate> _delegate;
	NSMutableArray* _blueprints;
	NSArray* _blueprintNames;

}

@property (nonatomic,retain) NSMutableArray * blueprints;                             //@synthesize blueprints=_blueprints - In the implementation block
@property (nonatomic,retain) NSArray * blueprintNames;                                //@synthesize blueprintNames=_blueprintNames - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) VEKProduction * production;                              //@synthesize production=_production - In the implementation block
@property (assign,nonatomic,__weak) id<PMEditProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long selectedIndex; 
-(id<PMEditProviderDelegate>)delegate;
-(void)setDelegate:(id<PMEditProviderDelegate>)arg1 ;
-(unsigned long long)selectedIndex;
-(void)setSelectedIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfItems;
-(VEKProduction *)production;
-(void)setProduction:(VEKProduction *)arg1 ;
-(id)initWithProduction:(id)arg1 ;
-(NSMutableArray *)blueprints;
-(NSArray *)blueprintNames;
-(id)displayNameForIndex:(unsigned long long)arg1 ;
-(void)willBeginScrolling;
-(void)setCustomBlueprint:(id)arg1 ;
-(id)customBlueprint;
-(void)setBlueprints:(NSMutableArray *)arg1 ;
-(void)setBlueprintNames:(NSArray *)arg1 ;
@end

