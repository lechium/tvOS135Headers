/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreML/CoreML-Structs.h>
@interface MLSaver : NSObject
+(BOOL)saveModelToAssetAtURL:(id)arg1 model:(id)arg2 error:(id*)arg3 ;
+(BOOL)saveModelToArchive:(MLModelOutputArchiver*)arg1 model:(id)arg2 error:(id*)arg3 ;
+(BOOL)saveModelToArchive:(MLModelOutputArchiver*)arg1 model:(id)arg2 compilerOptions:(id)arg3 error:(id*)arg4 ;
+(BOOL)copyModelAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
@end

