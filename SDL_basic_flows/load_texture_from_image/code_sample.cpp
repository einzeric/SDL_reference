//Code snippet for reference only. Not a complete runnable example

//Declare a rendering context
//For simplicity, just pretend that the rendering context is already initialized
SDL_Renderer* renderingContext;

//Load image from file into a SDL_Surface
SDL_Surface* loadedImage = IMG_Load("path/to/image.png");

//Build the texture from the loaded image
if(!loadedImage)
{
    //handle error in case image loading failed
}
else
{
    SDL_Texture* tex = SDL_CreateTextureFromSurface(renderingContext, loadedImage);
}

//Free the surface once the texture is created
SDL_FreeSurface(loadedImage);