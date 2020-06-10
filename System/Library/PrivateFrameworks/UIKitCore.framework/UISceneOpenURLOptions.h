/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, BSProcessHandle;

@interface UISceneOpenURLOptions : NSObject {

	NSString* _sourceApp;
	BSProcessHandle* _sourceProcessHandle;
	id _annotation;
	BOOL _openInPlace;
	BOOL _openAsDownload;

}

@property (nonatomic,readonly) BSProcessHandle * _sourceProcessHandle;              //@synthesize sourceProcessHandle=_sourceProcessHandle - In the implementation block
@property (nonatomic,readonly) BOOL _openAsDownload;                                //@synthesize openAsDownload=_openAsDownload - In the implementation block
@property (nonatomic,readonly) NSString * sourceApplication;                        //@synthesize sourceApp=_sourceApp - In the implementation block
@property (nonatomic,readonly) id annotation;                                       //@synthesize annotation=_annotation - In the implementation block
@property (nonatomic,readonly) BOOL openInPlace;                                    //@synthesize openInPlace=_openInPlace - In the implementation block
+(id)_optionsFromDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)annotation;
-(NSString *)sourceApplication;
-(BOOL)openInPlace;
-(BSProcessHandle *)_sourceProcessHandle;
-(id)_initWithSourceApplication:(id)arg1 processHandle:(id)arg2 annotation:(id)arg3 openInPlace:(BOOL)arg4 openAsDownload:(BOOL)arg5 ;
-(BOOL)_openAsDownload;
-(id)_initWithSourceApplication:(id)arg1 processHandle:(id)arg2 annotation:(id)arg3 openInPlace:(BOOL)arg4 ;
@end

