/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSBlob.h>

@protocol IKJSBlob <JSExport>
@end


@class NSData;

@interface IKJSBlob : IKJSObject <IKJSBlob> {

	NSData* _data;

}

@property (nonatomic,readonly) NSData * data; 
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
@end

