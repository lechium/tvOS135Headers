/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_LSAppLinkPlugIn.h>

@interface _LSSharedWebCredentialsAppLinkPlugIn : _LSAppLinkPlugIn
-(id)init;
-(id)callingBundleIdentifier;
-(optional<LSBinding>*)bindingWithContext:(LSContext*)arg1 forServiceDetails:(id)arg2 callingBundleIdentifier:(id)arg3 ;
-(void)enumerateBindingsWithContext:(LSContext*)arg1 forSWCResults:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)appLinksWithContext:(LSContext*)arg1 forSWCResults:(id)arg2 ;
-(id)appLinksWithContext:(LSContext*)arg1 error:(id*)arg2 ;
@end

