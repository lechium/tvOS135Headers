/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/MPMusicMediaPickerClientController.h>

@class MPMediaPickerController, NSString;

@interface MPMusicMediaPickerRemoteViewController : _UIRemoteViewController <MPMusicMediaPickerClientController> {

	MPMediaPickerController* _mediaPickerController;

}

@property (assign,nonatomic,__weak) MPMediaPickerController * mediaPickerController;              //@synthesize mediaPickerController=_mediaPickerController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(BOOL)_canShowWhileLocked;
-(MPMediaPickerController *)mediaPickerController;
-(void)setMediaPickerController:(MPMediaPickerController *)arg1 ;
-(void)remoteMediaPickerDidCancel;
-(void)remoteMediaPickerDidPickMediaItems:(id)arg1 ;
-(void)remoteMediaPickerDidPickPlaybackArchive:(id)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
@end

