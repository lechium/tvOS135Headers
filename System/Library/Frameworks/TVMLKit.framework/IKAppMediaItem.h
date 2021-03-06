/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL, NSString, IKAppMediaItemBridge;


@protocol IKAppMediaItem
@property (nonatomic,retain) NSURL * url; 
@property (nonatomic,retain) NSString * type; 
@property (nonatomic,readonly) IKAppMediaItemBridge * bridge; 
@required
-(NSString *)type;
-(void)setType:(id)arg1;
-(id)objectForKey:(id)arg1;
-(void)setObject:(id)arg1 forKey:(id)arg2;
-(NSURL *)url;
-(void)setUrl:(id)arg1;
-(IKAppMediaItemBridge *)bridge;

@end

