/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/IKJSApplication.h>
@class NSDictionary;


@protocol IKJSApplication <JSExport>
@property (nonatomic,readonly) NSDictionary * traitCollection; 
@required
-(NSDictionary *)traitCollection;
-(void)reload:(id)arg1 :(id)arg2;

@end

#import <libobjc.A.dylib/_IKJSApplicationProxy.h>

@class NSString, NSDictionary;

@interface IKJSApplication : IKJSObject <NSObject, IKJSApplication, _IKJSApplicationProxy>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * traitCollection; 
-(void)update;
-(NSDictionary *)traitCollection;
-(void)reload:(id)arg1 :(id)arg2 ;
-(id)asPrivateIKJSApplication;
-(void)launchAppWithOptions:(id)arg1 ;
-(void)suspendAppWithOptions:(id)arg1 ;
-(void)resumeAppWithOptions:(id)arg1 ;
-(void)openURLWithOptions:(id)arg1 ;
-(void)exitAppWithOptions:(id)arg1 ;
-(void)updatedAppWithOptions:(id)arg1 ;
-(void)traitCollectionChanged:(id)arg1 ;
-(BOOL)requestDocumentWithContext:(id)arg1 response:(id)arg2 ;
-(void)dispatchErrorWithMessage:(id)arg1 sourceURL:(id)arg2 line:(id)arg3 ;
@end

