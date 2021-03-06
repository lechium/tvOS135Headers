/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol VUIHomeShareMediaLibraryManager <NSObject>
@property (assign,nonatomic,__weak) id<VUIHomeShareMediaLibraryManagerDelegate> delegate; 
@property (nonatomic,copy,readonly) NSArray * homeShareMediaLibraries; 
@required
-(id<VUIHomeShareMediaLibraryManagerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id)initWithManager:(id)arg1;
-(void)beginDiscoveringMediaLibraries;
-(void)endDiscoveringMediaLibraries;
-(NSArray *)homeShareMediaLibraries;

@end

