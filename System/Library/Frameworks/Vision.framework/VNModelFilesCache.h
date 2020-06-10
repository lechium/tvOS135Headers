/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Vision/Vision-Structs.h>
@interface VNModelFilesCache : NSObject {

	unique_ptr<cvml::util::model_file_cache, std::__1::default_delete<cvml::util::model_file_cache> >* m_impl;

}
+(id)sharedInstance;
-(id)init;
-(id)load:(id)arg1 ;
-(void)purgeAll;
-(void)unload:(id)arg1 ;
@end

