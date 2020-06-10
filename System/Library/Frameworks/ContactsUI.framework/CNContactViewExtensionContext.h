/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/CNContactViewHostAsyncProtocol.h>
#import <libobjc.A.dylib/CNContactViewServiceProtocol.h>
#import <libobjc.A.dylib/CNContactViewHostProtocol.h>

@protocol OS_dispatch_semaphore;
@class NSObject, NSString;

@interface CNContactViewExtensionContext : NSExtensionContext <CNContactViewHostAsyncProtocol, CNContactViewServiceProtocol, CNContactViewHostProtocol> {

	BOOL _asyncShouldPerformResponse;
	NSObject*<OS_dispatch_semaphore> _asyncShouldPerformSemaphore;

}

@property (assign,nonatomic) BOOL asyncShouldPerformResponse;                                           //@synthesize asyncShouldPerformResponse=_asyncShouldPerformResponse - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> asyncShouldPerformSemaphore;              //@synthesize asyncShouldPerformSemaphore=_asyncShouldPerformSemaphore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)host;
-(BOOL)shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3 ;
-(void)updateEditing:(BOOL)arg1 doneButtonEnabled:(BOOL)arg2 doneButtonText:(id)arg3 ;
-(void)didCompleteWithContact:(id)arg1 ;
-(void)didDeleteContact:(id)arg1 ;
-(void)isPresentingFullscreen:(BOOL)arg1 ;
-(void)setupWithOptions:(id)arg1 readyBlock:(/*^block*/id)arg2 ;
-(void)didChangeToEditMode:(BOOL)arg1 ;
-(void)editCancel;
-(void)toggleEditing;
-(void)asyncShouldPerformDefaultActionResponse:(BOOL)arg1 ;
-(void)asyncShouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3 ;
-(void)setAsyncShouldPerformResponse:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)asyncShouldPerformSemaphore;
-(void)setAsyncShouldPerformSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(BOOL)asyncShouldPerformResponse;
@end

