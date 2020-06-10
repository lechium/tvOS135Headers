/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNExportOperation.h>

@class SCNScene, SCNNode, NSError, NSDictionary, NSURL, SCNRenderer;

@interface _SCNExportOperation : SCNExportOperation {

	void* _userInfo;
	SEL _didEndSelector;
	SCNScene* _scene;
	CGSize _size;
	SCNNode* _pointOfView;
	double _startTime;
	double _endTime;
	double _systemTime;
	BOOL _canceled;
	BOOL _succeded;
	double _progress;
	NSError* _error;
	id _delegate;
	NSDictionary* _attributes;
	NSURL* _outputURL;
	SCNRenderer* _renderer;
	unsigned long long _antialiasingMode;

}

@property (assign,nonatomic) id delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) void* userInfo;                                   //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic) SEL didEndSelector;                               //@synthesize didEndSelector=_didEndSelector - In the implementation block
@property (nonatomic,retain) SCNScene * scene;                                 //@synthesize scene=_scene - In the implementation block
@property (assign,nonatomic) CGSize size;                                      //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double startTime;                                 //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double endTime;                                   //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) double progress;                                  //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL canceled;                                    //@synthesize canceled=_canceled - In the implementation block
@property (assign,nonatomic) BOOL succeded;                                    //@synthesize succeded=_succeded - In the implementation block
@property (nonatomic,retain) NSDictionary * attributes;                        //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) NSURL * outputURL;                                //@synthesize outputURL=_outputURL - In the implementation block
@property (nonatomic,retain) SCNNode * pointOfView;                            //@synthesize pointOfView=_pointOfView - In the implementation block
@property (nonatomic,retain) NSError * error;                                  //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) unsigned long long antialiasingMode;              //@synthesize antialiasingMode=_antialiasingMode - In the implementation block
@property (nonatomic,retain) SCNRenderer * renderer;                           //@synthesize renderer=_renderer - In the implementation block
-(void)dealloc;
-(void*)userInfo;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(CGSize)size;
-(NSError *)error;
-(void)cancel;
-(double)startTime;
-(void)setError:(NSError *)arg1 ;
-(double)endTime;
-(void)setEndTime:(double)arg1 ;
-(void)setUserInfo:(void*)arg1 ;
-(double)progress;
-(void)setStartTime:(double)arg1 ;
-(void)setProgress:(double)arg1 ;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(BOOL)canceled;
-(void)setCanceled:(BOOL)arg1 ;
-(void)setOutputURL:(NSURL *)arg1 ;
-(NSURL *)outputURL;
-(void)setSize:(CGSize)arg1 ;
-(void)setScene:(SCNScene *)arg1 ;
-(SCNScene *)scene;
-(SCNRenderer *)renderer;
-(void)setRenderer:(SCNRenderer *)arg1 ;
-(void)setPointOfView:(SCNNode *)arg1 ;
-(unsigned long long)antialiasingMode;
-(SCNNode *)pointOfView;
-(void)setAntialiasingMode:(unsigned long long)arg1 ;
-(void)setDidEndSelector:(SEL)arg1 ;
-(BOOL)succeded;
-(SEL)didEndSelector;
-(void)setSucceded:(BOOL)arg1 ;
@end

