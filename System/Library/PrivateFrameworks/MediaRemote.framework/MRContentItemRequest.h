/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _MRContentItemProtobuf, _MRPlaybackQueueRequestProtobuf;

@interface MRContentItemRequest : NSObject <NSSecureCoding> {

	_MRContentItemProtobuf* _item;
	_MRPlaybackQueueRequestProtobuf* _request;

}

@property (nonatomic,retain) _MRContentItemProtobuf * item;                          //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) _MRPlaybackQueueRequestProtobuf * request;              //@synthesize request=_request - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_MRPlaybackQueueRequestProtobuf *)request;
-(void)setRequest:(_MRPlaybackQueueRequestProtobuf *)arg1 ;
-(_MRContentItemProtobuf *)item;
-(void)setItem:(_MRContentItemProtobuf *)arg1 ;
-(id)initWithItem:(id)arg1 request:(id)arg2 ;
@end

