/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolPageFrame, NSArray;

@interface RWIProtocolPageFrameResourceTree : RWIProtocolJSONObject

@property (nonatomic,retain) RWIProtocolPageFrame * frame; 
@property (nonatomic,copy) NSArray * resources; 
@property (nonatomic,copy) NSArray * childFrames; 
-(RWIProtocolPageFrame *)frame;
-(void)setFrame:(RWIProtocolPageFrame *)arg1 ;
-(NSArray *)resources;
-(void)setResources:(NSArray *)arg1 ;
-(NSArray *)childFrames;
-(id)initWithFrame:(id)arg1 resources:(id)arg2 ;
-(void)setChildFrames:(NSArray *)arg1 ;
@end

