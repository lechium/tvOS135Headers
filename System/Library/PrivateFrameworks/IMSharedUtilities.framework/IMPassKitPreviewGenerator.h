/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <IMSharedUtilities/IMImagePreviewGenerator.h>
#import <IMSharedUtilities/IMPreviewGeneratorProtocol.h>
#import <IMSharedUtilities/IMUTITypeInformation.h>

@interface IMPassKitPreviewGenerator : IMImagePreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>
+(id)UTITypes;
+(CGImageRef)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 error:(id*)arg3 ;
+(BOOL)writesToDisk;
+(CGSize)sizePreviewAtSourceURL:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 error:(id*)arg3 ;
+(id)passDataForURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)passDataHasFailed:(id)arg1 error:(id)arg2 ;
+(id)passForPassData:(id)arg1 error:(id*)arg2 ;
+(BOOL)passHasFailed:(id)arg1 error:(id)arg2 ;
+(id)passViewForPass:(id)arg1 ;
+(BOOL)passViewHasFailed:(id)arg1 ;
+(CGImageRef)newCroppedAndRescaledImageFromPKPassView:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 ;
+(BOOL)hasFailed:(id)arg1 error:(id)arg2 ;
@end

