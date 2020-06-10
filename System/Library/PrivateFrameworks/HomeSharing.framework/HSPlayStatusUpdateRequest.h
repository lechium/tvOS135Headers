/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeSharing/HSRequest.h>

@interface HSPlayStatusUpdateRequest : HSRequest {

	unsigned _interfaceID;
	unsigned _revisionID;

}

@property (nonatomic,readonly) unsigned interfaceID;              //@synthesize interfaceID=_interfaceID - In the implementation block
@property (nonatomic,readonly) unsigned revisionID;               //@synthesize revisionID=_revisionID - In the implementation block
-(double)timeoutInterval;
-(BOOL)isConcurrent;
-(unsigned)revisionID;
-(id)canonicalResponseForResponse:(id)arg1 ;
-(unsigned)interfaceID;
-(id)initWithInterfaceID:(unsigned)arg1 revisionID:(unsigned)arg2 ;
@end
