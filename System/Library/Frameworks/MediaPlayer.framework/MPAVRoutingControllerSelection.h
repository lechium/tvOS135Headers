/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPAVRoute;

@interface MPAVRoutingControllerSelection : NSObject {

	MPAVRoute* _route;
	long long _selectionOperation;
	/*^block*/id _completion;

}

@property (nonatomic,retain) MPAVRoute * route;                         //@synthesize route=_route - In the implementation block
@property (assign,nonatomic) long long selectionOperation;              //@synthesize selectionOperation=_selectionOperation - In the implementation block
@property (nonatomic,copy) id completion;                               //@synthesize completion=_completion - In the implementation block
-(id)description;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)setRoute:(MPAVRoute *)arg1 ;
-(MPAVRoute *)route;
-(long long)selectionOperation;
-(void)setSelectionOperation:(long long)arg1 ;
-(id)initWithRoute:(id)arg1 selectionOperation:(long long)arg2 ;
@end

