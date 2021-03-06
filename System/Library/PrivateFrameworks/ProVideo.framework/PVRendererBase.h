/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@class NSLock, PVVideoCompositingContext, NSString;

@interface PVRendererBase : NSObject {

	atomic<unsigned int> _frameCount;
	vector<HGRef<PVRenderJob>, std::__1::allocator<HGRef<PVRenderJob> > >* _inFlightRenderJobs;
	NSLock* _inFlightRenderJobsLock;
	HGSynchronizable* _perfStatsLock;
	PVPerfStats* _perfStats;
	BOOL _trackStats;
	PVVideoCompositingContext* _compositingContext;
	NSString* _name;

}

@property (nonatomic,retain) PVVideoCompositingContext * compositingContext;              //@synthesize compositingContext=_compositingContext - In the implementation block
@property (nonatomic,retain) NSString * name;                                             //@synthesize name=_name - In the implementation block
+(id)getEAGLShareGroup;
-(NSString *)name;
-(id)init;
-(void)dealloc;
-(id)initWithOptions:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)renderJobFinished:(HGRef<PVRenderJob>*)arg1 ;
-(void)didRecieveMemoryWarning:(id)arg1 ;
-(void)cancelAllPendingRequests;
-(void)printAndClearStats:(BOOL)arg1 ;
-(void)addRenderJobInFlight:(HGRef<PVRenderJob>*)arg1 ;
-(void)addFrameStats:(FrameStats*)arg1 ;
-(void)cleanupMemoryCaches;
-(HGRef<PVRenderJob>*)startJobForDelegate:(id)arg1 frameStats:(FrameStats*)arg2 ;
-(FrameStats*)newFrameStats;
-(void)trackStats:(BOOL)arg1 ;
-(PVVideoCompositingContext *)compositingContext;
-(void)setCompositingContext:(PVVideoCompositingContext *)arg1 ;
@end

