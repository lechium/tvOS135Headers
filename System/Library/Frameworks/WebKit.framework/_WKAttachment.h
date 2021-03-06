/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class _WKAttachmentInfo, NSString;

@interface _WKAttachment : NSObject <WKObject> {

	ObjectStorage<API::Attachment> _attachment;

}

@property (nonatomic,readonly) _WKAttachmentInfo * info; 
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (getter=isConnected,nonatomic,readonly) BOOL connected; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(NSString *)description;
-(void)dealloc;
-(NSString *)uniqueIdentifier;
-(_WKAttachmentInfo *)info;
-(BOOL)isConnected;
-(Object*)_apiObject;
-(void)setFileWrapper:(id)arg1 contentType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestInfo:(/*^block*/id)arg1 ;
-(void)setData:(id)arg1 newContentType:(id)arg2 newFilename:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

